/*
** EPITECH PROJECT, 2023
** my_glob
** File description:
** *
*/

#include "../../include/zeld.h"

// animation when the character is standing
void unmoved_animation(global_t *glob)
{
    glob->player->rect.top = 0;
    glob->player->rect.left = 78;
    sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
}

void punch_animation(global_t *glob)
{
    int widthmax = 78 * 3;

    glob->player->rect.top = 0;
    glob->clock->time = sfClock_getElapsedTime(glob->clock->clk);
    if (sfTime_asMilliseconds(glob->clock->time) >= 180) {
        sfSound_play(glob->music->sound);
        sfClock_restart(glob->clock->clk);
        glob->player->rect.left += 158;
        if (glob->player->rect.left >= widthmax)
            glob->player->rect.left = 0;
        sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
    }
}

// animation when the character is going up
void up_animation(global_t *glob)
{
    int widthmax = 78 * 3;

    glob->player->rect.top = 326;
    glob->clock->time = sfClock_getElapsedTime(glob->clock->clk);
    if (sfTime_asMilliseconds(glob->clock->time) >= 150) {
        sfClock_restart(glob->clock->clk);
        glob->player->rect.left += 78;
        if (glob->player->rect.left >= widthmax)
            glob->player->rect.left = 0;
        sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
    }
}

// animation when the character is going left
void left_animation(global_t *glob)
{
    int widthmax = 78 * 3;

    glob->player->rect.top = 109;
    glob->clock->time = sfClock_getElapsedTime(glob->clock->clk);
    if (sfTime_asMilliseconds(glob->clock->time) >= 100) {
        sfClock_restart(glob->clock->clk);
        glob->player->rect.left += 78;
        if (glob->player->rect.left >= widthmax)
            glob->player->rect.left = 0;
        sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
    }
}

// animation when the character is going down
void down_animation(global_t *glob)
{
    int widthmax = 78 * 3;

    glob->player->rect.top = 0;
    glob->clock->time = sfClock_getElapsedTime(glob->clock->clk);
    if (sfTime_asMilliseconds(glob->clock->time) >= 100) {
        sfClock_restart(glob->clock->clk);
        glob->player->rect.left += 78;
        if (glob->player->rect.left >= widthmax)
            glob->player->rect.left = 0;
        sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
    }
}

// animation when the character is going right
void right_animation(global_t *glob)
{
    int widthmax = 78 * 3;
    glob->player->rect.top = 215;
    glob->clock->time = sfClock_getElapsedTime(glob->clock->clk);
    if (sfTime_asMilliseconds(glob->clock->time) >= 100) {
        sfClock_restart(glob->clock->clk);
        glob->player->rect.left += 78;
        if (glob->player->rect.left >= widthmax)
            glob->player->rect.left = 0;
        sfSprite_setTextureRect(glob->player->sprt, glob->player->rect);
    }
}
