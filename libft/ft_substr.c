/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:57:09 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/19 15:02:52 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_into_ar(char const *s, unsigned int start, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	strlen;
	char			*buff;
	size_t			size;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (len == 0 || start >= strlen)
	{
		buff = malloc(sizeof(char) * 1);
		if (buff == NULL)
			return (NULL);
		buff[0] = '\0';
		return (buff);
	}
	size = 0;
	if (start < strlen)
		size = strlen - start;
	if (size > len)
		size = len;
	buff = NULL;
	buff = copy_into_ar(s, start, size);
	return (buff);
}

static char	*copy_into_ar(char const *s, unsigned int start, size_t size)
{
	unsigned int	strlen;
	size_t			i;
	size_t			j;
	char			*buff;

	strlen = ft_strlen((char *)s);
	i = start;
	j = 0;
	buff = malloc(sizeof(char) * (size + 1));
	if (buff == NULL)
		return (NULL);
	while (i < strlen)
	{
		buff[j] = s[i];
		if (s[i] == '\0' || j == size - 1)
		{
			j++;
			break ;
		}
		j++;
		i++;
	}
	buff[j] = '\0';
	return (buff);
}

/*
int main()
{
	char	*str = "Hello";
	
	printf("%s\n", ft_substr(str, 5, 5));
}
*/
