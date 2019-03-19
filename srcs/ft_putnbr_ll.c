/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 20:05:21 by aanzieu           #+#    #+#             */
/*   Updated: 2019/03/13 10:44:37 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static uint64_t	ft_len_nbr(uint64_t n)
{
	uint64_t	i;

	i = 1;
	while (n > 9)
	{
		i = i * 10;
		n = n / 10;
	}
	return (i);
}

void			ft_putnbr_ll(uint32_t n)
{
	uint64_t	len;

	len = ft_len_nbr(n);
	if (n == 0)
		ft_putchar(48);
	else
	{
		while (len != 0)
		{
			ft_putchar('0' + n / len);
			n = n - n / len * len;
			len /= 10;
		}
	}
}

void			ft_putnbr_ull(uint64_t n)
{
	uint64_t	len;

	len = ft_len_nbr(n);
	if (n == 0)
		ft_putchar(48);
	else
	{
		while (len != 0)
		{
			ft_putchar('0' + n / len);
			n = n - n / len * len;
			len /= 10;
		}
	}
}
