#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

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

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;

    node = *lst;
    if (node == NULL)
        node = new;
    while (node->next != NULL)
        node = node->next;
    node->next = new;
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
    ptr->content = "Node 3";
    ptr->next = NULL;

    printf("Before adding new node : ");
    ft_printlst(lst);

    ft_lstadd_back(&lst, ptr);

    printf("After adding new node : ");
    ft_printlst(lst);
}