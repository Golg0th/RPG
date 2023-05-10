/*
** EPITECH PROJECT, 2023
** B-MUL-200-NCY-2-1-myzeld-dorian.aubry
** File description:
** init_enemy
*/

#include "../../include/zeld.h"

void init_other_enemy(enemy_t *data)
{
    data->sprt_a = sfSprite_create();
    data->txt_a = sfTexture_createFromFile("assets/chevalié.png", NULL);
    sfSprite_setTexture(data->sprt_a, data->txt_a, sfTrue);
    data->rect_a = (sfIntRect){0, 0, 26, 41};
    sfSprite_setScale(data->sprt_a, (sfVector2f) {4, 4});
    sfSprite_setTextureRect(data->sprt_a, data->rect_a);
    sfSprite_setPosition(data->sprt_a, (sfVector2f){607, 1237});
    data->sprt_b = sfSprite_create();
    data->txt_b = sfTexture_createFromFile("assets/chevalié.png", NULL);
    sfSprite_setTexture(data->sprt_b, data->txt_b, sfTrue);
    data->rect_b = (sfIntRect){0, 0, 26, 41};
    sfSprite_setScale(data->sprt_b, (sfVector2f) {4, 4});
    sfSprite_setTextureRect(data->sprt_b, data->rect_b);
    sfSprite_setPosition(data->sprt_b, (sfVector2f){1331, 1342});
    data->life_a = 250;
    data->life_b = 250;
}

void init_enemy(enemy_t *data)
{
    data->sprt = sfSprite_create();
    data->txt = sfTexture_createFromFile("assets/chevaliéé.png", NULL);
    sfSprite_setTexture(data->sprt, data->txt, sfTrue);
    data->rect = (sfIntRect){0, 0, 26, 41};
    sfSprite_setScale(data->sprt, (sfVector2f) {4, 4});
    sfSprite_setTextureRect(data->sprt, data->rect);
    data->pos = (sfVector2f){1500, 700};
    sfSprite_setPosition(data->sprt, data->pos);
    data->sprt_d = sfSprite_create();
    data->txt_d = sfTexture_createFromFile("assets/chevalié.png", NULL);
    sfSprite_setTexture(data->sprt_d, data->txt_d, sfTrue);
    data->rect_d = (sfIntRect){0, 0, 26, 41};
    sfSprite_setScale(data->sprt_d, (sfVector2f) {4, 4});
    sfSprite_setTextureRect(data->sprt_d, data->rect_d);
    data->pos_d = (sfVector2f){1930, 1492};
    sfSprite_setPosition(data->sprt_d, data->pos_d);
    init_other_enemy(data);
}
