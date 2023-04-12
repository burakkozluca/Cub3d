/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:12:15 by burakkozluc       #+#    #+#             */
/*   Updated: 2023/04/12 04:11:08 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int line_length(t_cub3d *cub3d)
{
	int		fdmap;
	int		i;
	char	c;
	
	fdmap = open(cub3d->map_input[1], O_RDONLY);
	while (read(fdmap, &c, 1) >= 1)
	{
		if(ft_strchr(&c, '\n'))
			i++;
	}
	close(fdmap);
	return (i);
}