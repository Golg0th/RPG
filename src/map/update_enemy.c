/*
** EPITECH PROJECT, 2023
** DarkZeldg
** File description:
** caca
*/

#include "../../include/zeld.h"

void update_enemy(global_t *all)
{
    if (all->enemy->life == 0)
        all->dead_g = 1;
    if (all->enemy->life_d == 0)
        all->dead_n = 1;
    if (all->enemy->life_a == 0)
        all->dead_a = 1;
    if (all->enemy->life_b == 0)
        all->dead_b = 1;

}
