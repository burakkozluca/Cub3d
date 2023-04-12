/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:57:41 by bkozluca          #+#    #+#             */
/*   Updated: 2023/04/12 04:18:53 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *gelen, int a, size_t b)
{
	size_t	i;

	i = 0;
	while (i < b)
	{
		((unsigned char *)gelen)[i] = a;
		i++;
	}
	return (gelen);
}
