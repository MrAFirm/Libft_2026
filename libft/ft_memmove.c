/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:11:43 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/27 21:13:37 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *to, const void *from, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to == NULL && from == NULL)
		return (NULL);
	if (to <= from)
	{
		while (i < n)
		{
			((char *)to)[i] = ((char *)from)[i];
			i++;
		}
	}
	j = n;
	if (to > from)
	{
		while (j >= 0)
		{
			((char *)to)[j] = ((char *)from)[j];
			j--;
		}
	}
	return (to);
}


/*
#include <stdio.h>
int main()
{
	char	dest[] = "AAAAAAAAAAAAAAA";
	const char	*src = "Hello World";

	printf("dest before memmove: %s\n", dest);

	memmove(dest, src, 15);

	printf("dest after memmove: %s\n", dest);
}
*/
