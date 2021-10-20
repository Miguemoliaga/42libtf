/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:58:01 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*p;
	size_t		i;

	i = 0;
	len = ft_strlen(s);
	p = malloc(len * sizeof(char) + 1);
	if (!p)
		return (NULL);
	while (i < (len * sizeof(char)))
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
