/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:57:35 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/27 18:58:07 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;

	temp = malloc((count * size));
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
