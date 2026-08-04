/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:27:20 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/27 15:34:28 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0 && c <= 31)
		return (0);
	else if (c == 127)
		return (0);
	return (1);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isprint('%'));
}
*/
