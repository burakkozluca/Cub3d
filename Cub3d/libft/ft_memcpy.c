/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:04:08 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 10:54:42 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *gelen, const void *in, size_t b)
{
	size_t	i;

	i = 0;
	if (!gelen && !in)
		return (NULL);
	while (i < b)
	{
		((unsigned char *)gelen)[i] = ((unsigned char *)in)[i];
		i++;
	}
	return (gelen);
}
