/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:09:06 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 18:15:21 by likhye-y         ###   ########.fr       */
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
		return (total_len);
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
#include <stdio.h>
int main()
{
	char	dest[5] = "He";
	char	*src = "World!";
	
	printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
}
*/
