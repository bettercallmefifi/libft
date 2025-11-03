/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:47:03 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/03 15:13:48 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;
	void	*content;

	new = NULL;
	res = new;
	if (!lst || !f || !del)
		return (0);
	while (lst != NULL)
	{
		content = (*f)(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
/*static void	*dup(void *p)
{
	return (ft_strdup((char *)p));
}
static void	del(void *p)
{
	free(p);
}
int	main(void)
{
	t_list *a = ft_lstnew("hi");
	t_list *b = ft_lstnew("yo");
	ft_lstadd_back(&a, b);

	t_list *m = ft_lstmap(a, add_x, del);
	printf("%s %s\n", (char *)m->content, (char *)m->next->content);

	ft_lstclear(&m, del);
	free(b);
	free(a);
}*/