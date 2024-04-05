#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_printlst(t_list *lst)
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

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int main(void)
{
    t_list *lst;
    t_list *ptr;

    lst = malloc(sizeof(t_list));
    lst->content = "Node 1";
    lst->next = NULL;

    ptr = malloc(sizeof(t_list));
    lst->next = ptr;
    ptr->content = "Node 2";
    ptr->next = NULL;

    // New Node 
    ptr = malloc(sizeof(t_list));
    ptr->content = "Node 0";
    ptr->next = NULL;

    // printing before adding new node
    ft_printlst(lst);

    // Adding the node to front
    ft_lstadd_front(&lst, ptr);

    // printing after adding new node
    ft_printlst(lst);
}