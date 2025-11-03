/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:45:32 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 15:12:02 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	main(void)
{
	t_list *a = ft_lstnew("tani");
	t_list *b = ft_lstnew("lwl");
	ft_lstadd_front(&a, b);
	printf("%s\n", (char *)a->content);
	free(a->next);
	free(a);
}*/