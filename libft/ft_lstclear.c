/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:03:02 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/18 01:40:16 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	else
	{
		while (*lst)
		{
			next = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = next;
		}
		lst = NULL;
	}
}

/*
void	my_del(void *content)
{
	free(content);
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
	ft_lstclear(&head, my_del);
	if (!current)
		printf("Empty!");
}
*/
