/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 13:32:17 by aanzieu           #+#    #+#             */
/*   Updated: 2018/05/14 13:01:06 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char **s)
{
	int count;

	count = 0;
	while (s[count] != NULL)
		count++;
	return (count);
}
