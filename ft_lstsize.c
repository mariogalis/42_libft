/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:31:19 by magonzal          #+#    #+#             */
/*   Updated: 2022/02/09 16:53:21 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	aux;

	aux = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		aux++;
		lst = lst->next;
	}
	return (aux + 1);
}
