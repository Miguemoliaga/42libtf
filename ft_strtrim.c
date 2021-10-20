/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:58:33 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	trchar(char c, char *set)
{
	int	k;

	k = 0;
	while (set[k])
	{
		if (c == set[k])
			return (1);
		k++;
	}
	return (0);
}

int	getlast(char *s1, char *set, int strlen)
{
	int	j;

	j = 0;
	while (j < strlen)
	{
		if (!trchar(s1[strlen - 1 - j], set))
			break ;
		j++;
	}
	return (j);
}

int	getfirst(char *s1, char *set, int strlen)
{
	int	i;

	i = 0;
	while (i < strlen)
	{
		if (!trchar(s1[i], set))
			break ;
		i++;
	}
	if (i == strlen)
		return (0);
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	slen;
	size_t	finallen;
	int		start;

	if (!s1)
		return (NULL);
	if (!*set)
		return (ft_strdup(s1));
	slen = ft_strlen((char *)s1);
	if (!getfirst((char *)s1, (char *)set, slen))
		return (ft_strdup(""));
	start = getfirst((char *)s1, (char *)set, slen) - 1;
	finallen = (slen - (start + getlast((char *)s1, (char *)set, slen)));
	strim = ft_substr(s1, start, finallen);
	return (strim);
}
