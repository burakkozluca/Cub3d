/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcontroller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:04:45 by burakkozluc       #+#    #+#             */
/*   Updated: 2023/04/08 16:42:37 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    is_argtrue(t_cub3d *img)
{
    int len;

    len = ft_strlen(img->map_input[1]);
    if (img->map_input[1][len - 1] != 'b' &&
        img->map_input[1][len - 2] != 'u' &&
        img->map_input[1][len - 3] != 'c' &&
        img->map_input[1][len - 4] != '.')
    {
        write(2, "wrong map format", 16);
        exit(0);        
    }
}

void    map_check(t_cub3d *img)
{
    img->uz_y = -1;
}