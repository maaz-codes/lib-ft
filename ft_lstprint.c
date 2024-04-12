#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstprint(t_list *lst)
{
    t_list *node;

    node = lst;
    while (node != NULL)
    {
        printf("%s, ", (char *)node->content);
        node = node->next;
    }
    printf("\n");
}