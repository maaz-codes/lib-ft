#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    ptr = lst;
    if (ptr == NULL)
        return (NULL);
    while (ptr->next != NULL)
        ptr = ptr->next;
    return (ptr);
}

// int main(void)
// {
//     t_list *lst;
//     t_list *ptr;

//     lst = malloc(sizeof(t_list));
//     lst->content = "Node 1";
//     lst->next = NULL;

//     ptr = malloc(sizeof(t_list));
//     lst->next = ptr;
//     ptr->content = "Node 2";
//     ptr->next = NULL;

//     ptr = malloc(sizeof(t_list));
//     lst->next->next = ptr;
//     ptr->content = "Node 3";
//     ptr->next = NULL;

//     t_list *last_node = ft_lstlast(lst);
//     printf("Last node = %s \n", (char *)last_node->content);
// }