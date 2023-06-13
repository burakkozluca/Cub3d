/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcontroller2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:52:14 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 11:18:08 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub3d.h"

void	mapcontroller2(t_cub3d	*cub3dptr, int i)
{
	int		fd_map;

	fd_map = open(cub3dptr->map_input[1], O_RDONLY);
	cub3dptr->map[i] = 0;
	cub3dptr->max_map_height = i;
	i = 0;
	while (i < cub3dptr->max_map_height)
	{
		mapcheck3(cub3dptr->map[i], cub3dptr);
		realmapcheck(i, cub3dptr);
		if (cub3dptr->max_map_width < ft_strlen2(cub3dptr->map[i]))
			cub3dptr->max_map_width = ft_strlen2(cub3dptr->map[i]);
		i++;
	}
	close(fd_map);
	if ((cub3dptr->w_timer == 1 || cub3dptr->s_timer == 1
			|| cub3dptr->e_timer == 1 || cub3dptr->n_timer == 1))
		cub3dptr->map_bool = 1;
}
