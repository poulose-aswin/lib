/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:22:03 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/27 20:32:39 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*localstr;
	size_t			i;

	i = 0;
	localstr = (unsigned char *)s;
	while (i < n)
	{
		if (localstr[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
