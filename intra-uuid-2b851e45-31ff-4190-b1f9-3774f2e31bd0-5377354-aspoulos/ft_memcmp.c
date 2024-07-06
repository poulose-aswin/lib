/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:51:00 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/26 17:23:34 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*localstr1;
	const char	*localstr2;

	localstr1 = s1;
	localstr2 = s2;
	while (n > 0)
	{
		if (*localstr1 != *localstr2)
		{
			return ((unsigned char)*localstr1 - (unsigned char)*localstr2);
		}
		n--;
		localstr1++;
		localstr2++;
	}
	return (0);
}
