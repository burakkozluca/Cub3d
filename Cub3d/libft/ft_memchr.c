/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:35:20 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 10:54:30 by bkozluca         ###   ########.fr       */
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
