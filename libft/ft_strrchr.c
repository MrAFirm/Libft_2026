/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 18:57:17 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/17 20:49:30 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
		if (i < 0)
		{
			i = 0;
			break ;
		}
	}
	if (s[i] != (unsigned char)c)
		return (NULL);
	return ((char *)&s[i]);
}

/*
#include <stdio.h>
int main()
{
	char	*str = "hillo";
	printf("%s\n", ft_strrchr(str, 'e'));
}

Prints from the last occ of char.
*/
