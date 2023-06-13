/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycontrol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturna <tturna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:55:50 by bkozluca          #+#    #+#             */
/*   Updated: 2023/05/06 12:35:48 by tturna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/cub3d.h"

int	pushbutton(int keycode, t_cub3d *ptr)
{
	if (keycode == ESC || keycode == 65307)
	{
		mlx_destroy_window(ptr->mlx, ptr->mlx_win);
		exit_func3(ptr);
	}
	exit(0);
	return (0);
}

void	keycheckforloop(t_cub3d *img)
{
	if (img->check->w_check == true)
		turnup(img);
	if (img->check->a_check == true)
		turnleft(img);
	if (img->check->s_check == true)
		turndown(img);
	if (img->check->d_check == true)
		turnright(img);
	if (img->check->l_check == true)
		angleleft(img);
	if (img->check->r_check == true)
		angleright(img);
}

int	keychecker(int keycode, t_cub3d *ptr)
{
	if (keycode == ESC || keycode == 65307)
		pushbutton(keycode, ptr);
	if (keycode == W || keycode == 'w')
		ptr->check->w_check = true;
	if (keycode == A || keycode == 'a')
		ptr->check->a_check = true;
	if (keycode == S || keycode == 's')
		ptr->check->s_check = true;
	if (keycode == D || keycode == 'd')
		ptr->check->d_check = true;
	if (keycode == L || keycode == 65361)
		ptr->check->l_check = true;
	if (keycode == R || keycode == 65363)
		ptr->check->r_check = true;
	return (1);
}

int	keychecker2(int keycode, t_cub3d *ptr)
{
	if (keycode == W || keycode == 'w')
		ptr->check->w_check = false;
	if (keycode == A || keycode == 'a')
		ptr->check->a_check = false;
	if (keycode == S || keycode == 's')
		ptr->check->s_check = false;
	if (keycode == D || keycode == 'd')
		ptr->check->d_check = false;
	if (keycode == L || keycode == 65361)
		ptr->check->l_check = false;
	if (keycode == R || keycode == 65363)
		ptr->check->r_check = false;
	if (keycode == TAB)
		ptr->check->tab_check = !ptr->check->tab_check;
	return (1);
}
