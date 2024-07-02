/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maakhan <maakhan@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:14:06 by maakhan           #+#    #+#             */
/*   Updated: 2024/07/02 14:19:55 by maakhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
	*lst = NULL;
}
