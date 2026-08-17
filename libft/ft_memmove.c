/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:11:43 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/14 22:59:04 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if (n == 0)
		return (dest);
	if (dest <= src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	j = n - 1;
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
#include <string.h>
int main()
{
	char	dest[] = {67, 68, 67, 68, 69, 0, 45};
	const char	src[] = {67, 67, 68, 68, 69, 0, 45};
	
	printf("dest before memmove: %s\n", dest);
	
	ft_memmove(dest + 1, src, 2);
	
	printf("dest after memmove: %s\n", dest);
	printf("%p\n", ft_memmove(dest + 1, src, 2));
	printf("%p\n", dest + 1);
	
	int result = ft_memcmp(dest, src, 7);
	int	res = memcmp(dest, src, 7);
	printf("ft_memcmp: %d\nmemcmp: %d\n", result, res);
}
*/
