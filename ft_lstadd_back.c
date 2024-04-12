#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *lst_node;

    if(!lst)
        return ;
    if (*lst == NULL)
    {
        if (!new)
            return ;
        *lst = new;
    }
    else
    {
        lst_node = ft_lstlast(*lst);
        lst_node->next = new;
    }
}

// int main(void)
// {
//     t_list *lst;

//     lst = ft_lstnew(ft_strdup("Node 1"));
//     // lst = NULL;
    
//     printf("Before adding new node : ");
//     ft_lstprint(lst);

//     // ft_lstadd_back(&lst, ft_lstnew(ft_strdup("New Node")));
//     ft_lstadd_back(&lst, NULL);

//     printf("After adding new node : ");
//     ft_lstprint(lst);
// }