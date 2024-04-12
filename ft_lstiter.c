#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

// static void ft_print_content(void *content)
// {
//     if (content == NULL)
//         return ;
//     printf("%s, ", (char *)content);
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL)
        return ;
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}

// static void ft_printlst(t_list *lst)
// {
//     t_list *node;

//     node = lst;
//     while (node != NULL)
//     {
//         printf("%s, ", (char *)node->content);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_list *lst;
//     lst = ft_lstnew(strdup("Node 1"));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("Node 2")));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("Node 3")));

//     printf("Before iteration of List : ");
//     ft_printlst(lst);

//     printf("After iteration of List : ");
//     ft_lstiter(lst, &ft_print_content);
// }
