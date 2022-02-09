/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:14:08 by magonzal          #+#    #+#             */
/*   Updated: 2022/01/31 19:41:08 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srcsize;
	size_t	destsize;

	if (!dest && !src)
		return (0);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (n < destsize)
		return (srcsize + n);
	else
	{
		dest = dest + destsize;
		ft_strlcpy(dest, src, n - destsize);
		return (srcsize + destsize);
	}
}
