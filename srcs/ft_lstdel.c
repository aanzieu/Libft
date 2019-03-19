/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 15:53:32 by aanzieu           #+#    #+#             */
/*   Updated: 2019/03/13 10:41:01 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p_next;

	while (*alst)
	{
		p_next = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = p_next;
	}
}

void	ft_lstremove(t_list **lst, t_list *removed)
{
	if (!lst || !removed)
		return ;
	if (removed->prev)
	{
		(removed->prev)->next = removed->next;
		if (removed->next)
			removed->next->prev = removed->prev;
	}
	else
	{
		*lst = removed->next;
		if (removed->next)
			(removed->next)->prev = NULL;
	}
	removed->next = NULL;
	removed->prev = NULL;
}
