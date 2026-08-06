/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:19:56 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/06 16:43:59 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
	unsigned int count = ft_lstsize(head);
	
	current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("List size: %u\n", count);
}
*/
