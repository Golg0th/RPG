/*
** EPITECH PROJECT, 2022
** DarkZeld
** File description:
** init_map.c
*/

#include "../../include/zeld.h"

// function to initialize the window
void init_window(global_t *all)
{
    init_value(all);
    all->enemy->life_d = 250;
    MODE.bitsPerPixel = 64;
    MODE.width = 1920;
    MODE.height = 1080;
    WIN = sfRenderWindow_create(MODE, "aaaaaa", sfResize | sfClose, NULL);
}

// event to close the game
void eventclose(global_t *all)
{
    if (all->settings.event.type == sfEvtClosed)
        sfRenderWindow_close(all->settings.window);
    if (all->settings.event.type == sfEvtKeyPressed &&
    all->settings.event.key.code == sfKeyEscape) {
    }
}

// loop of the game
int screenopen(global_t *all)
{
    init_enemy(all->enemy); sound_handler(all);
    end_menu_handler(all);
    while (sfRenderWindow_isOpen(all->settings.window)) {
        sfRenderWindow_clear(all->settings.window, sfBlack);
        while (sfRenderWindow_pollEvent(all->settings.window,
        &(all->settings.event)))
            eventclose(all);
        game_events(all);
        if (LUH->health_status == 0) {
            sfMusic_stop(all->music->music);
            return (1);
        }
        if (init_meeting_zone_pr(all->player) == 1) {
            sfMusic_stop(all->music->music);
            break;
        }
        sfRenderWindow_display(all->settings.window);
    }
    return (0);
}

// function to handle every events in the game loop
void game_events(global_t *all)
{
    move_sprites(all);
    center_sprite_on_cam(all);
    map_borders_handler(all);
    RENDER(all->settings.window, all->mask_border->sprite, NULL);
    RENDER(all->settings.window, all->picture[0]->sprite, NULL);
    events_handler(all);
    RENDER(all->settings.window, all->player->sprt, NULL);
    RENDER(all->settings.window, all->mask_iso->sprite, NULL);
    draw_npc(all->player->npc, all);
    RENDER(all->settings.window, all->player->npc->s_pr, NULL);
    if (init_meeting_zone(all->player)) {
        RENDER(all->settings.window,
        all->player->npc->b_sp, NULL);
    }
    if (all->enemy->life_d > 0)
        fight_d(all), RENDER(all->settings.window, all->enemy->sprt_d, NULL);
    if (all->enemy->life > 0)
        fight(all), RENDER(all->settings.window, all->enemy->sprt, NULL);
    if (all->enemy->life_a > 0)
        fight_a(all), RENDER(all->settings.window, all->enemy->sprt_a, NULL);
    if (all->enemy->life_b > 0)
        fight_b(all), RENDER(all->settings.window, all->enemy->sprt_b, NULL);
    inventory_render(all); health_bar_render(all);
}

// function to initialize some useful value in my struct
void init_value(global_t *all)
{
    LUI = malloc(sizeof(inv_t));
    LUH = malloc(sizeof(health_t));
    LUH->heart = malloc(sizeof(l_spr) * 2);
}
