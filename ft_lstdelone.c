#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

static void del(void *content)
{
    if (content != NULL)
    {
        free(content);
        content = NULL;
    }
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}

static void ft_printlst(t_list *lst)
{
    t_list *node;

    node = lst;
    while (node != NULL)
    {
        printf("%s, \n", (char *)node->content);
        node = node->next;
    }
    printf("\n");
}

// int main()
// {
//     // Create a linked list
//     t_list *lst = ft_lstnew(strdup("Hello"));

//     printf("Original List:\n");
//     ft_printlst(lst);

//     // Delete the first node
//     printf("\nDeleting the first node:\n");
//     ft_lstdelone(lst, &del);
//     ft_printlst(lst);

//     return 0;
// }
