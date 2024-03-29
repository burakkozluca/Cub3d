/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:04:03 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 10:57:03 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub3d.h"

void	convertangle(char c, t_cub3d *img)
{
	if (c == 'E')
	{
		img->angle = 0;
		img->degree = 0;
	}
	else if (c == 'N')
	{
		img->angle = PI / 2;
		img->degree = 90;
	}
	else if (c == 'W')
	{
		img->angle = PI;
		img->degree = 180;
	}
	else if (c == 'S')
	{
		img->angle = (3 * PI / 2);
		img->degree = 270;
	}
}

void	angleright(t_cub3d *img)
{
	img->angle -= 0.1;
	if (img->angle > (2 * PI))
		img->angle -= 2 * PI;
	img->angle_x = cos(img->angle);
	img->angle_y = sin(img->angle);
}

void	angleleft(t_cub3d *img)
{
	img->angle += 0.1;
	if (img->angle <= 0)
		img->angle += 2 * PI;
	img->angle_x = cos(img->angle);
	img->angle_y = sin(img->angle);
}
