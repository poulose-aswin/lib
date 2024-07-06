/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:49:58 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/25 00:20:01 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	unsigned char	*s2;

	s2 = s;
	while (len--)
		*s2++ = 0;
	return (s);
}