/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:57:47 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 15:13:07 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr || !f)
		return ;
	while (ptr != NULL)
	{
		(*f)(ptr->content);
		ptr = ptr->next;
	}
}
/*static void	print(void *p)
{
	printf("%s\n", (char *)p);
}

int	main(void)
{
	t_list *a = ft_lstnew("one");
	t_list *b = ft_lstnew("two");
	ft_lstadd_back(&a, b);
	ft_lstiter(a, print);
	free(b);
	free(a);
}*/
