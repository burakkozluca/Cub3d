#ifndef CUB3D_H
#define CUB3D_H

#include <stdio.h>
#include <unistd.h>

typedef struct wasdrl
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
    
}   t_cub3d;



#endif