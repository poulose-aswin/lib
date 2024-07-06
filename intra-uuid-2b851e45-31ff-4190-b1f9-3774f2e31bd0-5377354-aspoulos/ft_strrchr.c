/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:36:21 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/25 23:28:50 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*addres;
	char	cc;
	int		i;

	cc = (char)c;
	i = 0;
	addres = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
		{
			addres = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == cc)
		addres = (char *)&s[i];
	return (addres);
}
