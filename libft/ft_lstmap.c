/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 17:01:14 by aanzieu           #+#    #+#             */
/*   Updated: 2016/05/03 17:14:00 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*p_next;

	if ((new = (t_list*)malloc(sizeof(t_list))) == 0)
		return (NULL);
	if (lst)
	{
		while (lst)
		{
			p_next = lst->next;
			new = f(lst);
			lst = p_next;
		}
	}
	return (new);
}
