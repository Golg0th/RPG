/*
** EPITECH PROJECT, 2023
** DarkZeld
** File description:
** inventaire
*/

#include "../../include/zeld.h"

// function to render my inventory sprites 96
void inventory_render(global_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprt);
    LUI->hotbar->pos = my_offset(player_pos, -523, 46);
    mod_sprites(LUI->hotbar->sprite, LUI->hotbar->pos, LUI->hotbar->scale);
    LUI->hotbar_pos = sfSprite_getPosition(LUI->hotbar->sprite);
    LUI->inv_focus->pos = my_offset(LUI->hotbar_pos,\
    96 + 93.8 * LUI->focus_index, 326);
    mod_sprites(LUI->inv_focus->sprite,\
    LUI->inv_focus->pos, LUI->inv_focus->scale);
    move_focus(all);
    render_several(all->settings.window, 4,\
    LUI->hreceptacle, LUI->health_pot, LUI->hotbar, LUI->inv_focus);
    draw_several_items(all);
}

// function to handle event on my inventory (focus moves)
void move_focus(global_t *all)
{
    if (KEYPRESSED(sfKeyLShift) || KEYPRESSED(sfKeyRShift)) {
        if (KEYPRESSED(sfKeyLeft) && LUI->focus_index > 0) {
            LUI->focus_index -= 1; wait_for_release(sfKeyLeft); return;
        }
        if (KEYPRESSED(sfKeyRight) && LUI->focus_index < 4) {
            LUI->focus_index += 1; wait_for_release(sfKeyRight); return;
        }
    }
}

// function to wait for the release of a key before continuing
void wait_for_release(int key)
{
    while (KEYPRESSED(key));
}

// function to draw my items in the slots
void draw_several_items(global_t *all)
{
    if (LUI->sword_status == 1) {
        RENDER(all->settings.window, LUI->sword_slot->sprite, NULL);
        LUI->sword_slot->pos = my_offset\
        (LUI->hotbar_pos, 230 + (93.8 * LUI->index_sword), 412);
        mod_sprites(LUI->sword_slot->sprite, LUI->sword_slot->pos,\
        (sfVector2f){ 0.061, 0.061 });
    }
    if (LUI->hpot_status == 1) {
        RENDER(all->settings.window, LUI->health_pot_slot->sprite, NULL);
        LUI->health_pot_slot->pos = my_offset\
        (LUI->hotbar_pos, 233 + (93.8 * LUI->index_hpot), 415);
        mod_sprites(LUI->health_pot_slot->sprite, LUI->health_pot_slot->pos,\
        (sfVector2f){ 0.2, 0.2 });
    }
}
