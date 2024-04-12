#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

static void *ft_toupper_string(void *content)
{
    char *s = (char *)content;
    char *result;
    int i;

    result = malloc(ft_strlen(s) + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = ft_toupper(s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

static void del(void *content)
{
    if (content != NULL)
    {
        free(content);
        content = NULL;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_node;

    new_lst = malloc(sizeof(size_t));
    new_lst->next = NULL;
    if (lst == NULL || f == NULL || del == NULL)
        return (NULL);
    while (lst != NULL)
    {
        new_node = ft_lstnew(f(lst->content));
        if (new_node == NULL)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_node);
        lst = lst->next;
        new_lst = new_lst->next;
    }
    return (new_lst);
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

int main(void)
{
    t_list *lst;
    t_list *new_lst;
    lst = ft_lstnew(strdup("Node 1"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("Node 2")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("Node 3")));

    printf("Before mapping of List : ");
    ft_printlst(lst);

    printf("After mapping of List : ");
    new_lst = ft_lstmap(lst, &ft_toupper_string, &del);
    ft_printlst(new_lst);

    // Clean up the original list
    ft_lstclear(&lst, &del);
    // Clean up the new list
    ft_lstclear(&new_lst, &del);

    return (0);
}
