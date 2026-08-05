/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:13:23 by likhye-y          #+#    #+#             */
/*   Updated: 2026/08/05 21:56:27 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_min(char *arr);
char	*negative_digit(int n, size_t count, char *arr);
char	*positive_digit(int n, size_t count, char *arr);
size_t	malloc_len_count(size_t count, int n);

char	*ft_itoa(int n)
{
	size_t	count;
	char	*arr;

	count = 0;
	arr = NULL;
	if (n == INT_MIN)
	{
		arr = malloc(sizeof(char) * 11 + 1);
		if (arr == NULL)
			return (NULL);
		arr = handle_min(arr);
		return (arr);
	}
	count = malloc_len_count(count, n);
	if (n < 0)
	{
		arr = negative_digit(n, count, arr);
		return (arr);
	}
	else if (n >= 0)
	{
		arr = positive_digit(n, count, arr);
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

char	*negative_digit(int n, size_t count, char *arr)
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

char	*positive_digit(int n, size_t count, char *arr)
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

size_t	malloc_len_count(size_t count, int n)
{
	int	nb;

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
	return (count);
}

/*
int main()
{
	char	*arr;
	
	arr = ft_itoa(-0);
	printf("%s\n", arr);
}
*/
