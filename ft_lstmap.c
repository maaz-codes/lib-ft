#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

// static void *ft_toupper_string(void *content)
// {
//     char *s;
//     char *result;
//     int i;

//     s = (char *)content;
//     result = malloc(ft_strlen(s) + 1);
//     if (!result)
//         return (NULL);
//     i = 0;
//     while (s[i])
//     {
//         result[i] = ft_toupper(s[i]);
//         i++;
//     }
//     result[i] = '\0';
//     return (result);
// }

// static void del(void *content)
// {
//     if (content != NULL)
//         free(content);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_node;

    if (!lst || !f || !del)
        return (NULL);
    new_lst = NULL;
    while (lst != NULL)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }

        ft_lstadd_back(&new_lst, new_node);   
        lst = lst->next;   
    }
    return (new_lst);
}

// int main(void)
// {
//     t_list *lst;
//     t_list *new_lst;
//     lst = ft_lstnew(strdup("Node 1"));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("Node 2")));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("Node 3")));

//     printf("Before mapping of List : ");
//     ft_lstprint(lst);

//     printf("After mapping of List : ");
//     new_lst = ft_lstmap(lst, &ft_toupper_string, &del);
//     ft_lstprint(new_lst);
// }
