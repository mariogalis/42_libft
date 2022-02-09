/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:17:45 by magonzal          #+#    #+#             */
/*   Updated: 2022/02/09 16:45:55 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *str, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len && ft_strchr(set, str[i]))
		i++;
	return (i);
}

static int	ft_end(const char *str, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 1;
	while (i < len && ft_strchr(set, str[len - i]))
		i++;
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
