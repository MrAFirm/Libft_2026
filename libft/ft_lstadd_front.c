/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 23:11:36 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/05 23:54:28 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst && new)
	{
		node = *lst;
		if (*lst)
			new->next = node;
		*lst = new;
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

	current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}
*/
