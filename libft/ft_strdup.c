/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:55:16 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/11 17:42:07 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*buff;

	i = 0;
	buff = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (buff == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		buff[i] = s[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

/*
int main()
{
	char	*str = "Meow";
	printf("%s\n", ft_strdup(str));
}
*/
