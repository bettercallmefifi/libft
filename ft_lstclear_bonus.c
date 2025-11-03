/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:45:50 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 15:12:22 by feel-idr         ###   ########.fr       */
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
/*static void	del(void *p)
{
	free(p);
}
int	main(void)
{
	t_list *a = ft_lstnew(strdup("one"));
	t_list *b = ft_lstnew(strdup("two"));
	ft_lstadd_back(&a, b);
	ft_lstclear(&a, del);
}*/