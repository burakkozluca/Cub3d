/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transparent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturna <tturna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:04:22 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 12:35:59 by tturna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub3d.h"

void	put_transparent(t_cub3d *img)
{
	int (i) = -1;
	while (++i < img->max_map_width * img->pixel
		* img->max_map_height * img->pixel)
	{
		img->addr_map[i] = 0xFF000000;
		img->addr_player[i] = 0xFF000000;
		img->addr_ray[i] = 0xFF000000;
	}
}
