/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:04:59 by burakkozluc       #+#    #+#             */
/*   Updated: 2023/04/12 04:11:22 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdbool.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line/get_next_line.h"

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
    int     l_iter;
    char	*line;
    int     texture_bool;
}   t_cub3d;

void    init(t_cub3d *img);
void    is_argtrue(t_cub3d *img);

//UTILS
int     line_length(t_cub3d *cub3d);

#endif