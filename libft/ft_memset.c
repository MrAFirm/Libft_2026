/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:48:11 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 17:03:52 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = chr;
		i++;
	}
	return (s);
}

/*
int main()
{
	char	str[] = "Hello World";
	char	*s1 = ft_memset(str, 'c', 1);
	printf("%s\n", s1);
}
*/
