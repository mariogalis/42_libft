/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:25:43 by magonzal          #+#    #+#             */
/*   Updated: 2022/02/09 15:54:40 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_aux(long int aux, char *str, int len)
{
	if (aux == 0)
	{
		str[aux] = 48;
		return ;
	}
	while (aux > 0)
	{
		str[len - 1] = 48 + (aux % 10);
		aux = aux / 10;
		len--;
	}
}

static int	ft_intlen(long int num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		num = num * -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	aux;
	int			len;

	aux = n;
	len = ft_intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (aux < 0)
	{
		str[0] = '-';
		aux = aux * -1;
	}
	ft_aux(aux, str, len);
	return (str);
}
