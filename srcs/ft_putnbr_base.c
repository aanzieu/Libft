/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 11:06:30 by aanzieu           #+#    #+#             */
/*   Updated: 2019/03/18 11:32:24 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putmaxneg_base(int nbr, char *base)
{
	if (nbr <= (-1 * (int)ft_strlen(base)))
	{
		ft_putmaxneg_base(nbr / ft_strlen(base), base);
		ft_putmaxneg_base(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[-nbr]);
}

void		ft_putnbr_base(int nbr, char *base)
{
	if (ft_atoi(base))
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putmaxneg_base(nbr, base);
			return ;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= (int)ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putnbr_base(nbr % ft_strlen(base), base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

void		ft_putnbr_ull_base(uint64_t nbr, char *base, size_t len)
{
	if (len <= 0)
		return ;
	ft_putnbr_ull_base(nbr / ft_strlen(base), base, len - 1);
	ft_putchar(base[(nbr % ft_strlen(base))]);
}

void		ft_putnbr_ll_base(uint32_t nbr, char *base, size_t len)
{
	if (len <= 0)
		return ;
	ft_putnbr_ll_base(nbr / ft_strlen(base), base, len - 1);
	ft_putchar(base[(nbr % ft_strlen(base))]);
}
