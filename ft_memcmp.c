/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:57:30 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1c;
	unsigned char	*str2c;

	str1c = (unsigned char *)str1;
	str2c = (unsigned char *)str2;
	while (0 < n)
	{
		if (*str1c != *str2c)
			return (*str1c - *str2c);
		n--;
		str1c++;
		str2c++;
	}
	return (0);
}
