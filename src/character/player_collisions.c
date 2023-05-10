/*
** EPITECH PROJECT, 2023
** DarkZeld
** File description:
** button
*/

#include "../../include/zeld.h"

// function that check if the play is in front of a wall (1 true 0 false)
int check_collision(global_t *all, int direction, int offsetx, int offsety)
{
    sfVector2f player_pos = GET_POS(all->player->sprt);
    player_pos.x += (float)offsetx; player_pos.y += (float)offsety;
    sfColor pixelColor = sfImage_getPixel(all->mask_image,\
    player_pos.x / (float)5.0, player_pos.y / (float)4.9);
    sfColor pixelColor2 = sfImage_getPixel(all->mask_tmp,\
    player_pos.x / (float)5.0, player_pos.y / (float)4.9);
    sfColor pixelColor3 = sfImage_getPixel(all->mask_a,\
    player_pos.x / (float)5.0, player_pos.y / (float)4.9);
    sfColor pixelColor4 = sfImage_getPixel(all->mask_b,\
    player_pos.x / (float)5.0, player_pos.y / (float)4.9);
    sfColor pixelColor5 = sfImage_getPixel(all->mask_d,\
    player_pos.x / (float)5.0, player_pos.y / (float)4.9);
    if (pixelColor.r == 255 && (pixelColor3.r == 255 ||all->dead_a)
    && (pixelColor4.r == 255 || all->dead_b)
    && (pixelColor2.r == 255 || all->dead_g)
    && (pixelColor5.r == 255 || all->dead_n))
        return 0;
    switch (direction) {
        case (LEFT): sfSprite_move(ply_spr, (sfVector2f){1, 0}); break;
        case (RIGHT): sfSprite_move(ply_spr, (sfVector2f){-1, 0}); break;
        case (BELOW): sfSprite_move(ply_spr, (sfVector2f){0, -1}); break;
        case (ABOVE): sfSprite_move(ply_spr, (sfVector2f){0, 1}); break;
    }
    return (1);
}
