/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:46:48 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 15:13:23 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>

int	main(void)
{
	t_list *a = ft_lstnew("lwl");
	t_list *b = ft_lstnew("lkhr");
	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)ft_lstlast(a)->content);
	free(b);
	free(a);
}*/