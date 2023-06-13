/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:10:12 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 10:52:29 by bkozluca         ###   ########.fr       */
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
