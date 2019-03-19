/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 16:21:51 by aanzieu           #+#    #+#             */
/*   Updated: 2019/03/12 11:43:32 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*tmp;

	tmp = *alst;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp)
	{
		tmp->next = new;
		new->prev = tmp;
		new->next = NULL;
	}
	else
		*alst = new;
}
