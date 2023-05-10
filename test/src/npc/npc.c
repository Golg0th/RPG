/*
** EPITECH PROJECT, 2023
** DarkZeld
** File description:
** npc
*/

#include "../../include/zeld.h"
void init_npc_bulle(npc_t *npc)
{
    sfVector2f prout = {574, 235};
    npc->b_sp = sfSprite_create();
    npc->b_tx = sfCff("sprites/pic/bulle.png", NULL);
    sfSprite_setTexture(npc->b_sp, npc->b_tx, sfTrue);
    sfSprite_setPosition(npc->b_sp, prout);
    sfSprite_setScale(npc->b_sp, (sfVector2f){0.4,0.4});
}

void init_princess(npc_t *npc)
{
    sfVector2f scale = {2, 2};
    sfVector2f pos = {2800, 1400};
    npc->s_pr = sfSprite_create();
    npc->t_pr = sfTexture_createFromFile("assets/princ.png", NULL);
    sfSprite_setScale(npc->s_pr, scale);
    sfSprite_setTexture(npc->s_pr, npc->t_pr, sfTrue);
    sfSprite_setPosition(npc->s_pr, pos);
}

void init_npc(npc_t *npc)
{
    npc->scale = (sfVector2f) {3.5, 3.5};
    npc->pos = (sfVector2f) {565, 350};
    npc->sprt = sfSprite_create();
    npc->txt = sfTexture_createFromFile("assets/pnj.png", NULL);
    sfSprite_setScale(npc->sprt, npc->scale);
    sfSprite_setTexture(npc->sprt, npc->txt, sfTrue);
    npc->e_scale = (sfVector2f) {2, 2};
    npc->e_pos = (sfVector2f) {574, 300};
    npc->e_sp = sfSprite_create();
    npc->e_tx = sfTexture_createFromFile("sprites/pic/press_e.png", NULL);
    sfSprite_setTexture(npc->e_sp, npc->e_tx, sfTrue);
    sfSprite_setScale(npc->e_sp, npc->e_scale);
    sfSprite_setPosition(npc->sprt, npc->pos);
    sfSprite_setPosition(npc->e_sp, npc->e_pos);
    init_npc_bulle(npc);
    init_princess(npc);
}

void draw_npc(npc_t *npc, global_t *all)
{
    sfRenderWindow_drawSprite(all->settings.window, npc->sprt, NULL);
    sfRenderWindow_drawSprite(all->settings.window, npc->e_sp, NULL);
}

int init_meeting_zone(object_t *play)
{
    sfVector2f pos = sfSprite_getPosition(play->sprt);
    if (pos.x <= 677 && pos.y <= 478 &&
        pos.x >= 424 && pos.y >= 388) {
        if (sfKeyboard_isKeyPressed(sfKeyE))
            return (1);
    }
    return (0);
}
