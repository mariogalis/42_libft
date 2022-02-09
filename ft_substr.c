/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:50:57 by magonzal          #+#    #+#             */
/*   Updated: 2022/02/09 15:57:14 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		aux;

	if (!s)
		return (NULL);
	i = 0;
	aux = ft_strlen(s);
	if (!*s || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len != 0 && start <= aux)
	{
		((char *)str)[i] = ((char *)s)[start];
		start++;
		i++;
		len--;
	}
	((char *)str)[i] = '\0';
	return (str);
}
