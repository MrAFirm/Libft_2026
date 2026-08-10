/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:11:43 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/10 17:52:34 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *to, const void *from, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((char *)to == NULL && (const char *)from == NULL)
		return (NULL);
	if (to <= from)
	{
		while (i < n)
		{
			((char *)to)[i] = ((const char *)from)[i];
			i++;
		}
	}
	j = n;
	if (to > from)
	{
		while (j >= 0)
		{
			((char *)to)[j] = ((const char *)from)[j];
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
