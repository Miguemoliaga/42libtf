/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <mmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:57:55 by mmartine          #+#    #+#             */
/*   Updated: 2021/10/26 17:43:03 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_free(char **m, int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		free(m[i]);
		m[i] = NULL;
		i++;
	}
	free(m);
	m = NULL;
}

static int	wordsnum(char *s, char c)
{
	size_t	i;
	int		words;
	int		newworld;

	words = 0;
	i = 0;
	newworld = 0;
	while (s[i])
	{
		if (s[i] == c)
			newworld = 1;
		else if (newworld || !words)
		{
			words++;
			newworld = 0;
		}
		i++;
	}
	return (words);
}

static char	**malmatrix(int words, char *s, char c)
{
	int		i;
	int		len;
	int		j;
	char	**matrix;

	matrix = (char **)malloc((words + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	matrix[words] = NULL;
	i = 0;
	j = 0;
	len = 0;
	while (i < words)
	{
		if (s[j] != c && s[j])
			len++;
		else if ((s[j] == c && len) || (i == words - 1 && !s[j]))
		{
			matrix[i] = ft_calloc(len + 1, sizeof(char));
			len = 0;
			i++;
		}
		j++;
	}
	return (matrix);
}

static char	**stom(char *s, char c, char **m)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] != 0 && s[k] == c && j != 0)
		{
			j = 0;
			i++;
		}
		else if (s[k] != c)
		{
			m[i][j] = s[k];
			j++;
		}
		k++;
	}
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		rows;

	matrix = NULL;
	if (!s)
		return (NULL);
	rows = wordsnum((char *)s, c);
	matrix = malmatrix(rows, (char *)s, c);
	if (!matrix)
	{
		ft_free(matrix, rows);
		return (NULL);
	}
	matrix = stom((char *)s, c, matrix);
	return (matrix);
}
