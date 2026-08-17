/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:09:45 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/18 01:39:24 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
lstmap is using the original list's nodes' content to create a new node to
form a new list.
*/
/*

void	my_del(void *content)
{
	free(content);
}

void	*my_f(void *content)
{
	(void)(content);
	return (content);
}
#include <stdio.h>
int main()
{
	t_list	*head = NULL;
	t_list	*current;
	t_list	*after;
	char	*content1 = malloc(6);
	char	*content2 = malloc(6);
	char	*content3 = malloc(6);
	t_list	*str1 = ft_lstnew(content1);
	t_list	*str2 = ft_lstnew(content2);
	t_list	*str3 = ft_lstnew(content3);
	
	ft_lstadd_back(&head, str1);
	ft_lstadd_back(&head, str2);
	ft_lstadd_back(&head, str3);
	
	current = head;
	after = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstmap(head, my_f, my_del);
	if (!current)
		printf("Empty!");
}
*/
