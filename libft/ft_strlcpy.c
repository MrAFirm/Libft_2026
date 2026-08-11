/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 08:47:26 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 17:12:35 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	if (src == NULL)
		return (0);
	while (src[i] != '\0')
		i++;
	s_len = i;
	if (len == 0)
		return (s_len);
	i = 0;
	while (src[i] != '\0' && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}
/*
#include <stdio.h>
int main()
{
	char	dest[4] = "";
	const char	*src = "Hello!";
	ft_strlcpy(dest, src, 4);
	
	printf("%s\n", dest);
}
*/
