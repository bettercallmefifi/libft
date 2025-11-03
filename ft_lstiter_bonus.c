#include "libft.h"
#include <string.h>
#include <bsd/string.h>

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

void	f(void *content)
{
    // copy "hihihi" into the memory pointed by content
    strcpy((char *)content, "hihihi");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// function to set content to "hihihi"
void set_to_hihihi(void *content)
{
    strcpy((char *)content, "hihihi"); // assumes content has enough space
}

int main(void)
{
    // create nodes with malloc'ed buffers
    t_list *node1 = ft_lstnew(malloc(20));
    t_list *node2 = ft_lstnew(malloc(20));
    t_list *node3 = ft_lstnew(malloc(20));

    strcpy(node1->content, "one");
    strcpy(node2->content, "two");
    strcpy(node3->content, "three");

    // link the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // print before
    printf("Before ft_lstiter:\n");
    t_list *tmp = node1;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    // apply ft_lstiter
    ft_lstiter(node1, set_to_hihihi);

    // print after
    printf("\nAfter ft_lstiter:\n");
    tmp = node1;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    // free memory
    free(node1->content);
    free(node2->content);
    free(node3->content);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
