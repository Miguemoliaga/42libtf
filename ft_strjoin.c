/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:58:06 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	i;
	size_t	j;
	size_t	s2len;

	i = 0;
	j = 0;
	if (!(s1 && s2))
		return (NULL);
	s2len = ft_strlen(s2);
	news = (char *)malloc((ft_strlen(s1) + s2len + 1) * sizeof(char));
	if (!news)
		return (NULL);
	while (i < ft_strlen(s1) && s1[i])
	{
		news[i] = s1[i];
		i++;
	}
	while (j < s2len && s2[j])
	{
		news[i + j] = s2[j];
		j++;
	}
	news[i + j] = '\0';
	return (news);
}
