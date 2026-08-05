/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:16:59 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/04 17:13:42 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, char delim);
char	**freeing(char **buff, int j);
char	*copying(char *buff, char const *s, size_t start, size_t end);
char	**logic(char **buff, char const *s, char c, size_t end);

char	**ft_split(char const *s, char c)
{
	size_t	end;
	char	**buff;

	buff = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (buff == NULL)
		return (NULL);
	end = 0;
	buff = logic(buff, s, c, end);
	return (buff);
}

size_t	count_word(char const *s, char delim)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] == delim)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != delim)
			if (s[i + 1] == delim || s[i + 1] == '\0')
				count++;
		i++;
	}
	return (count);
}

char	**freeing(char **buff, int j)
{
	j = j - 1;
	while (j >= 0)
	{
		free(buff[j]);
		j--;
	}
	free(buff);
	return (NULL);
}

char	*copying(char *buff, char const *s, size_t start, size_t end)
{
	size_t	k;

	k = 0;
	while (start <= end)
	{
		buff[k] = s[start];
		k++;
		start++;
	}
	buff[k] = '\0';
	return (buff);
}

char	**logic(char **buff, char const *s, char c, size_t end)
{
	size_t	i;
	int		j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (buff);
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i - 1;
		buff[j] = malloc(sizeof(char) * ((end - start + 1) + 1));
		if (buff[j] == NULL)
			return (freeing(buff, j));
		buff[j] = copying(buff[j], s, start, end);
		j++;
	}
	buff[j] = NULL;
	return (buff);
}

/*
int main()
{
	size_t	i;
	char	*str = "Hello      World         +";
	char	**buff;
	
	i = 0;
	buff = ft_split(str, ' ');
	while (buff[i])
	{
		printf("Buff[%zu]: %s\n", i, buff[i]);
		i++;
	}
}
*/
