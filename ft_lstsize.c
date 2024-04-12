#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *node;
    int count;

    node = lst;
    count = 0;
    while (node != NULL)
    {
        count++;
        node = node->next;
    }
    return (count);
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

//     int count = ft_lstsize(lst);
//     printf("Count = %d \n", count);
// }