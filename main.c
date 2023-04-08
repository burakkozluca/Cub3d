#include "cub3d.h"

int main(int argc, char **argv)
{
    t_cub3d *img;

    if(argc != 2)
        return (printf("bad argument!"));
    img = (t_cub3d *)malloc(sizeof(t_cub3d));   //oyun için yer açtık
    img->check = (t_check *)malloc(sizeof(t_check)); //oyun komutları için yer açtık.
    
}