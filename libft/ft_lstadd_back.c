/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:47:55 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/06 22:26:07 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst && new)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			node = *lst;
			while (node->next != NULL)
				node = node->next;
			node->next = new;
		}
	}
}

/*
int main()
{
	t_list	*head = NULL;
	t_list	*current;
	t_list	*new = ft_lstnew("Hello");
	t_list	*new2 = ft_lstnew("World");
	t_list	*new3 = ft_lstnew("!");
	
	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	t_list	*new4 = ft_lstnew("Bro!");
	
	ft_lstadd_back(&head, new4);
	
	current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}
*/
