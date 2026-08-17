/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 14:27:35 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/17 22:10:44 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	find_start(char const *s1, char const *set, size_t start);
size_t	find_end(char const *s1, char const *set, int k, size_t end);
char	*copy_into_arr(int start, int end, char *buff, char const *s1);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		k;
	int	start;
	int		end;
	char	*buff;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	start = find_start(s1, set, start);
	k = (int)(ft_strlen(s1) - 1);
	end = 0;
	end = find_end(s1, set, k, end);
	if (start > k)
	{
		buff = malloc(1);
		if (buff == NULL)
			return (NULL);
		buff[0] = '\0';
		return (buff);
	}
	buff = malloc(sizeof(char) * (end - start + 1) + 1);
	if (buff == NULL)
		return (NULL);
	buff = copy_into_arr(start, end, buff, s1);
	return (buff);
}

size_t	find_start(char const *s1, char const *set, size_t start)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
		{
			start = i;
			break ;
		}
		i++;
	}
	if (s1[i] == '\0')
		start = i;
	return (start);
}

size_t	find_end(char const *s1, char const *set, int k, size_t end)
{
	size_t	j;

	j = 0;
	while (k >= 0)
	{
		j = 0;
		while (s1[k] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
		{
			end = k;
			break ;
		}
		k--;
	}
	return (end);
}

char	*copy_into_arr(int start, int end, char *buff, char const *s1)
{
	size_t	i;

	i = 0;
	while (start <= end)
	{
		buff[i] = s1[start];
		i++;
		start++;
	}
	buff[i] = '\0';
	return (buff);
}


/*
int main()
{
	printf("%s\n", ft_strtrim("", "123"));
	free(ft_strtrim("", "123"));
}
*/


