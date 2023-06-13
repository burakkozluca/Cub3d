/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:57:41 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 10:54:49 by bkozluca         ###   ########.fr       */
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
