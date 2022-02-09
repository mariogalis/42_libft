/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:48:06 by magonzal          #+#    #+#             */
/*   Updated: 2022/02/09 15:56:02 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

static void	ft_free(int col, char **mat)
{
	while (--col >= 0)
		free(mat[col]);
	free(mat);
}

static char	**split_aux(char const *s, char c, char **mat, int len)
{
	int	j;
	int	col;

	col = 0;
	while (*s && col < len)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			mat[col] = malloc(sizeof(char) * (word_len(s, c) + 1));
			if (!mat[col])
			{
				ft_free(col, mat);
				return (NULL);
			}	
			j = 0;
			while (*s != c && *s)
				mat[col][j++] = *s++;
			mat[col][j] = 0;
			col++;
		}
	}
	mat[col] = NULL;
	return (mat);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**mat;

	if (!s)
		return (NULL);
	if (!*s)
	{
		mat = malloc(sizeof(char *));
		mat[0] = NULL;
		return (mat);
	}
	len = words(s, c);
	mat = malloc(sizeof(char *) * (len + 1));
	if (!mat)
		return (NULL);
	return (split_aux(s, c, mat, len));
}
