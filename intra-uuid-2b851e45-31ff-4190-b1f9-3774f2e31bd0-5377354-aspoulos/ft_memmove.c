/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:40:34 by aspoulos          #+#    #+#             */
/*   Updated: 2023/12/18 13:54:42 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*localdest;
	const char	*localsrc;

	localdest = (char *)dest;
	localsrc = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		while (n-- > 0)
		{
			localdest[n] = localsrc[n];
		}
	}
	return (dest);
}
