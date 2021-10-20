/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:58:22 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	*str1c;
	unsigned char	*str2c;

	str1c = (unsigned char *)str1;
	str2c = (unsigned char *)str2;
	i = 0;
	while (i < num)
	{
		if ((str1c[i] == '\0') || (str2c[i] == '\0'))
			return (str1c[i] - str2c[i]);
		else if (str1c[i] != str2c[i])
			return (str1c[i] - str2c[i]);
		i++;
	}
	return (0);
}
