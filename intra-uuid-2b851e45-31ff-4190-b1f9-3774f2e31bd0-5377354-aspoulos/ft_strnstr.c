/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:39:41 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/27 21:48:45 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	while (i + needle_len <= len)
	{
		if (*(haystack + i) == *needle)
			if (!(ft_strncmp((haystack + i), needle, needle_len)))
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
