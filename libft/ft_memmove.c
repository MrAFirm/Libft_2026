/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:11:43 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 17:11:47 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((char *)dest == NULL && (const char *)src == NULL)
		return (NULL);
	if (dest <= src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	j = n;
	if (dest > src)
	{
		while (j >= 0)
		{
			((char *)dest)[j] = ((const char *)src)[j];
			j--;
		}
	}
	return (dest);
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
