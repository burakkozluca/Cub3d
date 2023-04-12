/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:35:20 by ysensoy           #+#    #+#             */
/*   Updated: 2023/02/23 21:00:50 by yasinsensoy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*k;
	size_t			i;

	i = 0;
	k = (unsigned char *)s;
	while (i < n)
	{
		if (k[i] == (unsigned char)c)
			return (&k[i]);
		i++;
	}
	return (0);
}
