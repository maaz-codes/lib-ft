#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;

    return (node);
}

// int main(void)
// {
//     int data = 34;
//     t_list *node = ft_lstnew(&data);
//     printf("Node Data : %d", *(int *)node->content); // node->content = &data; *&data = 34;
// }