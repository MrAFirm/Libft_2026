/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:15:43 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 17:09:26 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = (unsigned char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dst[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int main()
{
	char	str1[] = "Hello";
	char 	str2[10] = "\0";
	
	char	*s1 = ft_memcpy(str2, str1, 3);
	
	printf("%s\n", s1);
}
*/
