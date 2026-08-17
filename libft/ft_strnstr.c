/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:33:23 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/17 23:47:32 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	const char	*haystack;
	const char	*needle;
	size_t		j;
	size_t		check;

	i = 0;
	haystack = big;
	needle = little;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		check = i;
		while (check < len && haystack[check] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
			check++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char	*str1 = "";
	char	*sub = "coucou";
	
	printf("%s\n", ft_strnstr(str1, sub, -1));
}
*/

