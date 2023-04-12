/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:56:55 by bkozluca          #+#    #+#             */
/*   Updated: 2023/04/12 04:18:57 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *gelen, const void *in, size_t b)
{
	if (!gelen && !in)
		return (NULL);
	if (gelen < in)
		ft_memcpy (gelen, in, b);
	else if (gelen > in)
	{
		while (b--)
			*((unsigned char *)(gelen + b)) = *((unsigned char *)(in + b));
	}
	return (gelen);
}
