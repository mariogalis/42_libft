/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:13:18 by magonzal          #+#    #+#             */
/*   Updated: 2022/01/26 18:19:02 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_memset(void *s, int c, size_t len);

void	ft_bzero(void *s, unsigned int n)
{
	ft_memset(s, 0, n);
}
