/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:28 by iouardi           #+#    #+#             */
/*   Updated: 2021/11/09 21:18:54 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptr;

	j = -1;
	i = ft_strlen(s);
	ptr = (unsigned char *)s;
	while (++j < i && j < n)
	{
		if (ptr[j] == (unsigned char)c)
			return ((void *)(ptr + j));
	}
	if (ptr[j] == c)
		return ((void *)(ptr + j));
	return (NULL);
}