/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:14:13 by bkozluca          #+#    #+#             */
/*   Updated: 2023/04/12 04:19:05 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;
	size_t			i;

	i = 0;
	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	while (n > i)
	{
		if (k1[i] != k2[i])
			return (k1[i] - k2[i]);
		i++;
	}
	return (0);
}
