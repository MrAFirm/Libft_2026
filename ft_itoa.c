/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:13:23 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/04 23:05:43 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_min(char *arr);

char	*ft_itoa(int n)
{
	size_t	count;
	char	*arr;
	int		nb;
	// size_t	i;

	count = 0;
	if (n == INT_MIN)
	{
		arr = malloc(sizeof(char) * 11 + 1);
		if (arr == NULL)
			return (NULL);
		arr = handle_min(arr);
		return (arr);
	}
	nb = n;
	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	if (nb < 10)
		count++;
	if (n < 0)
	{
		n = -n;
		count = 1 + count + 1;
		arr = malloc(sizeof(char) * count);
		if (arr == NULL)
			return (NULL);
		arr[0] = '-';
		count = count - 1;
		arr[count] = '\0';
		count = count - 1;
		while (n >= 10 && count >= 1)
		{
			arr[count] = (n % 10) + '0';
			n = n / 10;
			count--;
		}
		if (n < 10 && count >= 1)
		{
			arr[count] = n + '0';
			count--;
		}
		return (arr);
	}
	else if (n >= 0)
	{
		count = count + 1;
		arr = malloc(sizeof(char) * count);
		if (arr == NULL)
			return (NULL);
		count = count - 1;
		arr[count] = '\0';
		count = count - 1;
		while (n >= 10 && count >= 0)
		{
			arr[count] = (n % 10) + '0';
			n = n / 10;
			count--;
		}
		if (n < 10 && count >= 0)
		{
			arr[count] = n + '0';
			count--;
		}
		return (arr);
	}
	return (NULL);
}

char	*handle_min(char *arr)
{
	arr[0] = '-';
	arr[1] = '2';
	arr[2] = '1';
	arr[3] = '4';
	arr[4] = '7';
	arr[5] = '4';
	arr[6] = '8';
	arr[7] = '3';
	arr[8] = '6';
	arr[9] = '4';
	arr[10] = '8';
	arr[11] = '\0';
	return (arr);
}

/*
int main()
{
	char	*arr;
	
	arr = ft_itoa(2147483647);
	printf("%s\n", arr);
}
*/
