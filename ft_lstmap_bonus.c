#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{	
	t_list	*res;
	t_list	*new;
	void	*content;

	new = NULL;
	res = new;
	if (!lst || !f || !del)
		return 0;
	while (lst != NULL)
	{
		content = (*f)(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&res,del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}