/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 20:04:09 by aanzieu           #+#    #+#             */
/*   Updated: 2019/03/13 10:40:24 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

ssize_t		ft_next_align(ssize_t number, size_t divisor)
{
	while ((number % divisor) && number < SSIZE_MAX)
		number++;
	return (number);
}

int			ft_atoi(char const *nptr)
{
	int	ret;
	int i;
	int	neg;

	ret = 0;
	i = 0;
	neg = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\v'
			|| nptr[i] == '\t' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr && nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = ret * 10 + (nptr[i] - '0');
		i++;
	}
	return (neg * ret);
}
