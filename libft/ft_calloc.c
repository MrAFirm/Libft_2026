/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:24:06 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/10 18:01:22 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_ele, size_t size)
{
	void	*ptr;

	if (!num_ele || !size || num_ele > (UINT_MAX / size))
		return (NULL);
	ptr = malloc(size * num_ele);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * num_ele);
	return (ptr);
}
