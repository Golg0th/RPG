/*
** EPITECH PROJECT, 2023
** B-MUL-200-NCY-2-1-myzeld-dorian.aubry
** File description:
** init_sprite
*/

#include "../../include/zeld.h"

// function to initialize the player
void init_player(global_t *glob)
{
    glob->player->sprt = sfSprite_create();
    glob->player->txt = sfTexture_createFromFile("assets/main.png", NULL);
    sfSprite_setTexture(glob->player->sprt, glob->player->txt, sfTrue);
    glob->player->rect = (sfIntRect){0, 0, 66, 110};
    sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
    glob->player->pos = (sfVector2f){41 * 16, 34 * 16};
    sfSprite_setScale(glob->player->sprt, (sfVector2f) {0.8, 0.8});
    sfSprite_setPosition(glob->player->sprt, glob->player->pos);
}
