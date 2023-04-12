/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcontroller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:04:45 by burakkozluc       #+#    #+#             */
/*   Updated: 2023/04/12 04:03:37 by burakkozluc      ###   ########.fr       */
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
        exit(1);        
    }
}

void    map_check(t_cub3d *img)
{
    img->uz_y = -1;
    img->l_iter = 0;
    int (fd_map) = open(img->map_input[1], O_RDONLY);
    if (fd_map < 0)
		exit_func2("\033[1;31mFile could not be opened!\n\033[0m");
    img->map = malloc((sizeof(char *)) * 1024);
    while (++(img->uz_y) <= line_length(img))
    {
        img->line = get_next_line(fd_map);
        if(!img->line)
            break ;
        if(!img->texture_bool)
            map_check2(img->line, img);
    }
}

void    map_check2(char *word, t_cub3d *img)
{
    
}