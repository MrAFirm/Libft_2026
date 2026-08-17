/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:44:38 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/18 00:53:27 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	t_list	*last = ft_lstlast(head);
	
	current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("Last Node: %s\n", (char *)last->content);
}
*/
