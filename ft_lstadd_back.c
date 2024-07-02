/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maakhan <maakhan@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:13:42 by maakhan           #+#    #+#             */
/*   Updated: 2024/07/02 14:20:27 by maakhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_node;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		if (!new)
			return ;
		*lst = new;
	}
	else
	{
		lst_node = ft_lstlast(*lst);
		lst_node->next = new;
	}
}
