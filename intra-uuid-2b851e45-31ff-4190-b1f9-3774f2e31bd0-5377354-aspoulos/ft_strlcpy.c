/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:55:42 by aspoulos          #+#    #+#             */
/*   Updated: 2023/12/18 13:55:12 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (destsize > srclen + 1)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (destsize)
	{
		ft_memcpy(dst, src, destsize - 1);
		dst[destsize - 1] = '\0';
	}
	return (srclen);
}
