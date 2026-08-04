/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:09:06 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/28 18:16:17 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
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
	while (dest[j] != '\0')
		j++;
	if (size <= j)
		return (size + src_len);
	total_len = j + src_len;
	while (src[i] != '\0' && j < size + 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[total_len] = '\0';
	return (total_len);
}

/*
#include <stdio.h>
int main()
{
	char	dest[20] = "Hello ";
	char	*src = "World!";
	
	printf("%zu\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
}
*/
