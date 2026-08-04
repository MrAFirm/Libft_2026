/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 18:25:22 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/28 18:58:18 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == character)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char	*str = "hello";
	
	printf("%s\n", ft_strchr(str, 'e'));
}

Prints from the first occ of char.
*/
