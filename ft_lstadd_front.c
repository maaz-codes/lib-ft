#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

// int main(void)
// {
//     t_list *lst;
//     t_list *ptr;

//     lst = ft_lstnew(strdup("Node 1"));

//     ptr = ft_lstnew(strdup("Node 0"));

//     // printing before adding new node
//     ft_lstprint(lst);

//     // Adding the node to front
//     ft_lstadd_front(&lst, ptr);

//     // printing after adding new node
//     ft_lstprint(lst);
// }