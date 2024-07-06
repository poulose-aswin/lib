/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:22:32 by aspoulos          #+#    #+#             */
/*   Updated: 2023/12/18 13:54:35 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	char		*localto;
	const char	*localfrom;

	localto = to;
	localfrom = from;
	if (!to && !from)
		return (NULL);
	else
		while (numBytes--)
			*localto++ = *localfrom++;
	return (to);
}
