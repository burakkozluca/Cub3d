/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:04:53 by burakkozluc       #+#    #+#             */
/*   Updated: 2023/04/08 15:04:55 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    check_all(t_cub3d *img)
{
    img->no = 0;
    img->so = 0;
    img->we = 0;
    img->ea = 0;

}

void    init(t_cub3d *img)
{
    img->check->w = false;
    img->check->a = false;
    img->check->s = false;
    img->check->d = false;
    img->check->r = false;
    img->check->l = false;
}

int main(int argc, char **argv)
{
    t_cub3d *img;

    if(argc != 2)
        return (printf("bad argument!"));
    img = (t_cub3d *)malloc(sizeof(t_cub3d));   //oyun için yer açtık
    img->check = (t_check *)malloc(sizeof(t_check)); //oyun komutları için yer açtık.
    img->map_input = argv;
    init(img);
}