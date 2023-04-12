/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:10:12 by bkozluca          #+#    #+#             */
/*   Updated: 2023/04/12 04:13:11 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *giren, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *) giren)[a] = '\0';
		a++;
	}
	return (giren);
}
