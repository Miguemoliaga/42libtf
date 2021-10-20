/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:56:03 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 19:56:07 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	mult;
	int	resul;
	int	i;

	i = 0;
	mult = 1;
	resul = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			mult = -1;
		i++;
	}
	while (str[i] && (str[i] > 47 && str[i] < 58))
	{
		resul = (resul * 10 + (str[i] - '0'));
		i++;
	}
	return (resul * mult);
}
