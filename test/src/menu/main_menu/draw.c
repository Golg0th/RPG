/*
** EPITECH PROJECT, 2023
** DarkZeld
** File description:
** draw
*/

#include "../../../include/zeld.h"
#include "../../../include/menu.h"

// function that draws the entire menu
void draw_all_menu(menu_t *menu, global_t *glob)
{
    sfRenderWindow_drawSprite(glob->settings.window, menu->bg_s, NULL);
    sfRenderWindow_drawSprite(glob->settings.window, menu->but->play_s, NULL);
    sfRenderWindow_drawSprite(glob->settings.window, menu->but->quit_s, NULL);
    sfRenderWindow_drawSprite(glob->settings.window, menu->but->set_s, NULL);
}
