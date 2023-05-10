/*
** EPITECH PROJECT, 2023
** B-MUL-200-NCY-2-1-myzeld-dorian.aubry
** File description:
** animation_bis
*/

#include "../../include/zeld.h"

void enemy_animation(enemy_t *enemy)
{
    int widthmax = 20 * 4;
    enemy->rect.top = 0;
    enemy->time = sfClock_getElapsedTime(enemy->clo);
    if (sfTime_asMilliseconds(enemy->time) >= 350) {
        sfClock_restart(enemy->clo);
        enemy->rect.left += 28;
        if (enemy->rect.left >= widthmax)
            enemy->rect.left = 0;
        sfSprite_setTextureRect(enemy->sprt, enemy->rect);
    }
}

void enemy_animation_d(enemy_t *enemy)
{
    int widthmax = 20 * 4;
    enemy->rect_d.top = 0;
    enemy->time_f = sfClock_getElapsedTime(enemy->clo_f);
    if (sfTime_asMilliseconds(enemy->time_f) >= 350) {
        sfClock_restart(enemy->clo_f);
        enemy->rect_d.left += 28;
        if (enemy->rect_d.left >= widthmax)
            enemy->rect_d.left = 0;
        sfSprite_setTextureRect(enemy->sprt_d, enemy->rect_d);
    }
}

void enemy_animation_a(enemy_t *enemy)
{
    int widthmax = 20 * 4;
    enemy->rect_a.top = 0;
    enemy->time_f = sfClock_getElapsedTime(enemy->clo_f);
    if (sfTime_asMilliseconds(enemy->time_f) >= 350) {
        sfClock_restart(enemy->clo_f);
        enemy->rect_a.left += 28;
        if (enemy->rect_a.left >= widthmax)
            enemy->rect_a.left = 0;
        sfSprite_setTextureRect(enemy->sprt_a, enemy->rect_a);
    }
}

void enemy_animation_b(enemy_t *enemy)
{
    int widthmax = 20 * 4;
    enemy->rect_b.top = 0;
    enemy->time_f = sfClock_getElapsedTime(enemy->clo_f);
    if (sfTime_asMilliseconds(enemy->time_f) >= 350) {
        sfClock_restart(enemy->clo_f);
        enemy->rect_b.left += 28;
        if (enemy->rect_b.left >= widthmax)
            enemy->rect_b.left = 0;
        sfSprite_setTextureRect(enemy->sprt_b, enemy->rect_b);
    }
}
