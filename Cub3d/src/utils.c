/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturna <tturna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:46:10 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 12:36:02 by tturna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub3d.h"

char	*clear_endstr(char *str)
{
	int		i;
	char	*newstr;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 32)
		{
			str[i] = 0;
			newstr = ft_strdup(str);
			free(str);
			return (newstr);
		}
		i++;
	}
	return (str);
}

int	is_number(char *str)
{
	int (i) = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] > '9' && str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}
