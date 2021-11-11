/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:37:33 by iouardi           #+#    #+#             */
/*   Updated: 2021/11/11 23:37:52 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*arr;
	int		nb;
	int		i;
	int		j;
	
	arr = NULL;
	i = 0;
	j = 0;
		arr = malloc(2);
	if (n == 0)
		return ("0");
	if (n == -2147483647 -1)
	{
		ft_strlcpy(arr, "-2147483648", 12);
		return (arr);
	}
	nb = n;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	nb = n;
	while (nb > 0)
	{
		nb /= 10;
		j++;
	}
	nb = n;
	arr =     malloc((i + j + 1) *   sizeof(char))       ;
	if (arr == NULL)
		return (NULL);
	arr[j + i] = '\0';
	if (i == 1)
		arr[0] = '-';
	while (n > 0)
	{
		if (i == 1 && j == 0)
			break;
		nb = n % 10;
		arr[j + i - 1] = nb + '0';
		j--;
		n /= 10;
	}
	return (arr);
}
