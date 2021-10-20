/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:56:39 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:12 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t		i;
	char		*p;

	i = 0;
	p = (char *)malloc(num * size);
	if (!p)
		return (NULL);
	while (i < num * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
