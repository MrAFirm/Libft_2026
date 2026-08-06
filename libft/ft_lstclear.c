/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:03:02 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/06 17:07:12 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (lst)
	{
		node = *lst;
		while (lst != NULL)
		{
			next = node->next;
			del(node->content);
			free(node);
			node = next;
		}
		lst = NULL;
	}
}
