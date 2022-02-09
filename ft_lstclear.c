/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:01:51 by magonzal          #+#    #+#             */
/*   Updated: 2022/02/09 12:41:30 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*temp;

	aux = *lst;
	if (!*lst)
		return ;
	while (aux)
	{
		temp = aux;
		aux = aux->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
