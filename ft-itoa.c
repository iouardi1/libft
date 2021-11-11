/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:37:33 by iouardi           #+#    #+#             */
/*   Updated: 2021/11/11 22:04:49 by iouardi          ###   ########.fr       */
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
	if (n > 2147483647)
		n = -1;
	if (n < -2147483648)
		n = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (n >= 0)
	{
		n /= 10;
		j++;
	}
	arr = malloc((i + j + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (n > 0)
	{
		nb %= 10;
		arr[j] = nb + '0';
		n /= 10;
	}
	return (arr);
}

int main()
{
	printf("%s", ft_itoa(-1337));
}