/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:41:56 by bkozluca          #+#    #+#             */
/*   Updated: 2023/04/12 04:16:54 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dizi;
	size_t	uz;
	size_t	i;

	if (!s || !f)
		return (0);
	uz = ft_strlen2(s);
	i = 0;
	dizi = malloc(uz + 1);
	if (!dizi)
		return (0);
	while (i < uz)
	{
		dizi[i] = (*f)(i, s[i]);
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
