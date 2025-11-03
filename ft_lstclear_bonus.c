#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
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