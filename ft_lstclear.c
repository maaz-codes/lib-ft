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

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *node;
    while (*lst != NULL)
    {
        node = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = node; 
    }
    *lst = NULL;
}

static void ft_printlst(t_list *lst)
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

// int main()
// {
//     t_list *lst;

//     lst = ft_lstnew(strdup("Node 1"));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("Node 2")));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("Node 3")));

//     printf("Before deleting : ");
//     ft_printlst(lst);

//     printf("After deleting : ");
//     ft_lstclear(&lst->next->next, &del);
//     ft_printlst(lst);
// }