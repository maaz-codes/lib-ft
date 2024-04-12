#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;

    node = *lst;
    if (node == NULL)
    {
        if (!new)
            return ;
        node = new;
    }
    while (node->next != NULL)
        node = node->next;
    node->next = new;
}

// int main(void)
// {
//     t_list *lst;

//     lst = ft_lstnew(strdup("Node 1"));
    
//     printf("Before adding new node : ");
//     ft_lstprint(lst);

//     // ft_lstadd_back(&lst, ft_lstnew(strdup("Node 2")));
//     ft_lstadd_back(&lst, ft_lstnew(NULL));

//     printf("After adding new node : ");
//     ft_lstprint(lst);
// }