/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:56:59 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numcont(int n)
{
	int				len;
	unsigned int	un;

	un = 0;
	len = 0;
	if (n < 0)
	{
		un = (unsigned int)(n * -1);
		len++;
	}
	else if (n == 0)
		return (1);
	else
		un = (unsigned int)n;
	while (un >= 1)
	{
		un /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				len;
	unsigned int	un;

	un = 0;
	len = numcont(n);
	s = ft_calloc(len-- + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
		*s = '0';
	else if (n < 0)
	{
		un = (unsigned int)(n * -1);
		s[0] = '-';
	}
	else
		un = (unsigned int)n;
	while (un >= 1)
	{
		s[len] = un % 10 + '0';
		un /= 10;
		len--;
	}
	return (s);
}
