/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:45:50 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 14:57:15 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!(*lst) || !lst)
		return ;
	while ((*lst) != NULL)
	{
		ptr = *lst;
		(*lst) = (*lst)->next;
		ft_lstdelone(ptr, del);
	}
	(*lst) = NULL;
}
