/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:48:11 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/27 18:15:25 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	chr;
	size_t			i;
	
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		((char *)ptr)[i] = chr;
		i++;
	}
	return (ptr);
}
