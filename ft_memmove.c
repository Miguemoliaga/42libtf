/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:57:36 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*strdest;
	unsigned char		*strsrc;

	if (!str1 && !str2)
		return (NULL);
	i = 0;
	strdest = (unsigned char *)str1;
	strsrc = (unsigned char *)str2;
	if (strdest > strsrc)
	{
		i = n;
		while (i--)
			strdest[i] = strsrc[i];
	}
	else
	{
		while (i < n)
		{
			strdest[i] = strsrc[i];
			i++;
		}
	}
	return (strdest);
}
