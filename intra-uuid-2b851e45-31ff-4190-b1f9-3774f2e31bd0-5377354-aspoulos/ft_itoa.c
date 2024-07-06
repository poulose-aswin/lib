/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspoulos <aspoulos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:03:30 by aspoulos          #+#    #+#             */
/*   Updated: 2023/12/16 18:17:53 by aspoulos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(int number)
{
	unsigned int	units;

	units = 0;
	if (number < 0)
	{
		number = -number;
		units++;
	}
	if (number == 0)
		units++;
	while (number != 0)
	{
		units++;
		number /= 10;
	}
	return (units);
}

char	*ft_itoa(int n)
{
	char		*itoa;
	long int	number;
	int			unit;

	number = n;
	unit = count(n);
	itoa = malloc(sizeof(char) * (count(n) + 1));
	if (!itoa)
		return (NULL);
	if (number < 0)
		number = -number;
	itoa[unit--] = '\0';
	while (unit >= 0)
	{
		itoa[unit] = ((number % 10) + 48);
		number /= 10;
		unit--;
	}
	if (n < 0)
		itoa[0] = '-';
	return (itoa);
}
