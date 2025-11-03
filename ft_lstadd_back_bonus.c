/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:45:11 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 15:11:27 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}
/*#include <stdio.h>

int	main(void)
{
	t_list *a = ft_lstnew("lwl");
	t_list *b = ft_lstnew("tani");
	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)a->next->content);
	free(b);
	free(a);
}*/