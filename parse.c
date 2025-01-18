/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** parse.c
*/
#include "./include/radar.h"
#include "./include/my.h"
#include "./include/struct.h"
#include <SFML/System/Vector2.h>

static int file_format(char const *name)
{
    int len = my_strlen(name);

    if (len < 8)
        return 1;
    if (!my_strstr(".legend", name + len - 7))
        return 1;
    return 0;
}

static int error_comp(char **tmp)
{
    if (!tmp || !tmp[0])
        return 1;
    if (my_strcmp(tmp[0], "A") == 0) {
        if (my_arrlen(tmp) != 7)
            return 1;
    }
    if (my_strcmp(tmp[0], "T") == 0) {
        if (my_arrlen(tmp) != 4)
            return 1;
    }
    if (my_strcmp(tmp[0], "A") != 0 && my_strcmp(tmp[0], "T") != 0)
        return 1;
    for (int j = 1; tmp[j]; j++) {
        if (!my_str_isnum(tmp[j]))
            return 1;
    }
    return 0;
}

static int file_content(char **values, object_t *array, int *index,
    texture_t *texture)
{
    char **tmp;

    if (!values || !index)
        return 1;
    for (int i = 0; values[i]; i++) {
        tmp = my_str_to_word_array(values[i], ' ');
        if (!tmp || error_comp(tmp))
            return 1;
        if (my_strcmp(tmp[0], "A") == 0) {
            array[*index].p = init_plane(tmp, texture);
            array[*index].t = NULL;
        }
        if (my_strcmp(tmp[0], "T") == 0) {
            array[*index].t = init_tower(tmp, texture);
            array[*index].p = NULL;
        }
        *index += 1;
        free(tmp);
    }
    return 0;
}

static char *get_buffer(char const *av[])
{
    struct stat st;
    int fd = open(av[1], O_RDONLY);
    char *buffer;

    if (stat(av[1], &st) == -1 || fd == -1)
        return NULL;
    buffer = malloc(sizeof(char) * (st.st_size + 1));
    if (!buffer) {
        close(fd);
        return NULL;
    }
    if (read(fd, buffer, st.st_size) == -1) {
        free(buffer);
        close(fd);
        return NULL;
    }
    buffer[st.st_size] = '\0';
    close(fd);
    return buffer;
}

int get_len(char const *av[])
{
    char *buffer = get_buffer(av);
    char **array;
    int len;

    if (!buffer){
        free(buffer);
        return -1;
    }
    array = my_str_to_word_array(buffer, '\n');
    if (!array){
        free(buffer);
        return -1;
    }
    len = my_arrlen(array);
    free(array);
    return len;
}

static void free_buff_tab(char *buffer, char **tab)
{
    free(buffer);
    for (int i = 0; tab[i]; i++){
        free(tab[i]);
    }
    free(tab);
}

static texture_t *get_texture(void)
{
    texture_t *texture = malloc(sizeof(texture_t));

    texture->plane_texture = sfTexture_createFromFile("./img/plane.png", NULL);
    texture->tower_texture = sfTexture_createFromFile("./img/tower.png", NULL);
    return texture;
}

object_t *parse(char const *av[])
{
    char *buffer = get_buffer(av);
    char **tab;
    object_t *array;
    int index = 0;
    texture_t *texture = get_texture();

    if (file_format(av[1]) || !buffer || !texture)
        return NULL;
    tab = my_str_to_word_array(buffer, '\n');
    if (!tab) {
        free(buffer);
        return NULL;
    }
    array = malloc(sizeof(object_t) * my_arrlen(tab));
    if (!array || file_content(tab, array, &index, texture)) {
        free_buff_tab(buffer, tab);
        return NULL;
    }
    free_buff_tab(buffer, tab);
    return array;
}
