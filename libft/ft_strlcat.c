/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:09:06 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/17 21:30:10 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	size_t	total_len;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;
	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	total_len = j + src_len;
	if (size <= j)
		return (size + src_len);
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (total_len);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[30]; ft_memset(dest, 0, 30);
	char	*src = "World!";
	dest[0] = 'B';
	
	printf("%zu\n", ft_strlcat(dest, src, 6));
	printf("%zu\n", ft_strlen(src));
	printf("%d\n", strcmp(dest, "B"));
	printf("%s\n", dest);
}
*/
