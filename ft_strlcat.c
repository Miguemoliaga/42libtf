/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:58:09 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		dstlength;

	dstlength = ft_strlen(dst);
	j = dstlength;
	i = 0;
	if (!size)
		return (ft_strlen(src));
	if (size < dstlength)
		return (ft_strlen(src) + size);
	while (j < size - 1 && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (i + dstlength <= size)
		(dst[i + dstlength] = '\0');
	return (dstlength + ft_strlen(src));
}
