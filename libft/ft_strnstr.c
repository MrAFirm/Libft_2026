/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:33:23 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 17:31:47 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	const char	*haystack;
	const char	*needle;
	size_t		j;

	i = 0;
	haystack = big;
	needle = little;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			j++;
			if (needle[i] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char	*str1 = "Hello World";
	char	*sub = "or";
	
	printf("%s\n", ft_strnstr(str1, sub, 5));
}
*/
