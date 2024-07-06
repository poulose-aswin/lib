/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:35:39 by aspoulos          #+#    #+#             */
/*   Updated: 2023/11/27 10:07:55 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((8 < c && c < 14) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			temp;
	int			sign;
	const char	*localstr;

	localstr = str;
	sign = 1;
	temp = 0;
	while (ft_isspace(*localstr))
		localstr++;
	if (*localstr == '+' || *localstr == '-')
	{
		if (*localstr == '-')
			sign *= (-1);
		localstr++;
	}
	while (ft_isdigit(*localstr))
	{
		temp *= 10;
		temp += *localstr - '0';
		localstr++;
	}
	return (temp * sign);
}
