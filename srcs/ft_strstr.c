/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <aanzieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 20:06:51 by aanzieu           #+#    #+#             */
/*   Updated: 2018/05/14 13:05:58 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	j;

	j = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, j) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
