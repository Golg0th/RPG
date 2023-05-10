/*
** EPITECH PROJECT, 2022
** DarkZeld
** File description:
** players_movements.c
*/

#include "../../include/zeld.h"

// function that moves the player sprite whenver a key is pressed
void move_sprites(global_t *all)
{
    if (KEYPRESSED(sfKeyLShift) || KEYPRESSED(sfKeyRShift)) {
        unmoved_animation(all); return;
    }
    if (KEYPRESSED(sfKeyRight) && check_collision(all, RIGHT, 1, 0) == 0) {
        right_animation(all);
        sfSprite_move(all->player->sprt, (sfVector2f) {1, 0}); return;
    }
    if (KEYPRESSED(sfKeyLeft) && check_collision(all, LEFT, -1, 0) == 0) {
        left_animation(all);
        sfSprite_move(all->player->sprt, (sfVector2f) {-1, 0}); return;
    }
    if (KEYPRESSED(sfKeyDown) && check_collision(all, BELOW, 0, 1) == 0) {
        down_animation(all);
        sfSprite_move(all->player->sprt, (sfVector2f) {0, 1}); return;
    }
    if (KEYPRESSED(sfKeyUp) && check_collision(all, ABOVE, 0, -1) == 0) {
        up_animation(all);
        sfSprite_move(all->player->sprt, (sfVector2f) {0, -1}); return;
    }
    if (KEYPRESSED(sfKeySpace)) {
        punch_animation(all); return;
    }unmoved_animation(all);

}
