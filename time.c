/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** time.c
*/
#include "./include/radar.h"
#include "./include/my.h"
#include "./include/struct.h"

static int get_count(int time)
{
    int count = 0;

    if (time == 0)
        return 1;
    count = 0;
    while (time > 0) {
        time /= 10;
        count++;
    }
    return count;
}

static char *create_str(int time, int count)
{
    char *str = malloc(sizeof(char) * (count + 1));

    if (!str)
        return NULL;
    str[count] = '\0';
    for (int i = count - 1; i >= 0; i--) {
        str[i] = (time % 10) + '0';
        time /= 10;
    }
    return str;
}

static char *get_time(int time)
{
    char *str;
    int count;

    if (time == 0) {
        str = malloc(sizeof(char) * 2);
        if (!str)
            return NULL;
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    count = get_count(time);
    return create_str(time, count);
}

void display_time(sfRenderWindow *window, sfClock *clock, info_t *info)
{
    float time_in_seconds;
    sfTime elapsed_time = sfClock_getElapsedTime(clock);
    sfFont *font = sfFont_createFromFile("./font/Roboto-Black.ttf");
    sfText *text = sfText_create();
    char *time = get_time(info->time);

    time_in_seconds = elapsed_time.microseconds / 1000000.0f;
    if (elapsed_time.microseconds / 1000000.0f >= 1){
        info->time += 1;
        sfClock_restart(clock);
    }
    sfText_setString(text, time);
    sfText_setFont(text, font);
    sfText_setPosition(text, (sfVector2f){1690, 50});
    sfText_setCharacterSize(text, 70);
    sfText_setColor(text, sfBlack);
    sfRenderWindow_drawText(window, text, NULL);
}
