/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 21:28:02 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/30 22:45:58 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_strlen;
	char	*buff;

	total_strlen = ft_strlen(s1) + ft_strlen(s2);
	buff = malloc(sizeof(char) * (total_strlen + 1));
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		buff[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		buff[i] = s2[j];
		i++;
		j++;
	}
	buff[i] = '\0';
	return (buff);
}

/*
int main()
{
	printf("%s\n", ft_strjoin("123456789", "A"));
}
*/
