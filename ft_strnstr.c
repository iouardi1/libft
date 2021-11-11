/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:26:07 by iouardi           #+#    #+#             */
/*   Updated: 2021/11/11 13:16:24 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;

	if (str2[i] == '\0')
		return ((char *)str1);
	while (i < len)
	{
		j = 0;
		while (str2[j] && str2[j] == str1[i] && i < len)
		{
			i++;
			j++;
		}
		if (str2[j] == '\0')
			return ((char *)str1 + (i - j));
		i++;
	}
	return (NULL);
}
