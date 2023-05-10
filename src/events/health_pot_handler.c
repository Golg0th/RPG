/*
** EPITECH PROJECT, 2023
** sword handler
** File description:
** sword_handler
*/

#include "../../include/zeld.h"

// function that handle the sword picking
void hpot_event_handler(global_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprt);
    if ((player_pos.x > 792 && player_pos.x < 889) &&
        (player_pos.y > 1974 && player_pos.y < 2071)) {
            if (KEYPRESSED(sfKeyE) && LUI->hpot_picked != 1) {
                pick_the_hpot(all);
                wait_for_release(sfKeyE);
                return;
            }
        }
}

// function to pick the sword
void pick_the_hpot(global_t *all)
{
    LUI->hpot_status = 1; LUI->hpot_picked = 1;
    LUI->health_pot->scale = (sfVector2f){0, 0};
    mod_sprites(LUI->health_pot->sprite,\
    LUI->health_pot->pos, LUI->health_pot->scale);
}
