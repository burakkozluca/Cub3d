/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:04:59 by burakkozluc       #+#    #+#             */
/*   Updated: 2023/04/08 16:42:25 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_bool
{
    bool w;
    bool a;
    bool s;
    bool d;
    bool r;
    bool l;
}   t_check;

typedef struct cub3d
{
    void    *mlx;
    void    *mlx_win;
    t_check *check;
    char    **map;
    char    **map_input;

    int		no;
	int		so;
	int		we;
	int		ea;

    int     uz_y;
}   t_cub3d;

void init(t_cub3d *img);

//UTILS
int	ft_strlen(const char *str);
#endif