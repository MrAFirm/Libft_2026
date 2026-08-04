/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:57:09 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/31 22:27:13 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*copy_into_arr(char *buff, char const *s, unsigned int start, size_t buff_size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	strlen;
	char			*buff;
	size_t			buff_size;

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
	buff_size = 0;
	if (start < strlen)
		buff_size = strlen - start;
	if (buff_size > len)
		buff_size = len;
	buff = malloc(sizeof(char) * (buff_size + 1));
	if (buff == NULL)
		return (NULL);
	buff = copy_into_arr(buff, s, start, buff_size);
	return (buff);
}

char	*copy_into_arr(char *buff, char const *s, unsigned int start, size_t buff_size)
{
	unsigned int	strlen;
	size_t			i;
	size_t			j;
	
	strlen = ft_strlen((char *)s);
	i = start;
	j = 0;
	while (i < strlen)
	{
		buff[j] = s[i];
		if (s[i] == '\0' || j == buff_size - 1)
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
	
	printf("%s\n", ft_substr(str, 4, 10));
}
*/
