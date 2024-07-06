/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:08:54 by aspoulos          #+#    #+#             */
/*   Updated: 2023/12/05 22:32:10 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	size_t	new_len;
	size_t	i;

	i = 0;
	new_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc (sizeof(char) * (new_len + 1));
	if (!new_str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		new_str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	new_str[ft_strlen(s1) + i] = '\0';
	return (new_str);
}
