/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** header
*/

#ifndef OBJECTS_H_
    #define OBJECTS_H_
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>

typedef struct {
    sfVector2f start;
    sfVector2f end;
    sfVector2f current;
    int speed;
    int delay;
    int col;
    int tow;
    int active;
    sfSprite *sprite;
    sfTexture *texture;
    sfRectangleShape *hitbox;
} plane_t;

typedef struct {
    sfVector2f pos;
    int radius;
    sfCircleShape *hitbox;
    sfSprite *sprite;
    sfTexture *texture;
} tower_t;

typedef struct {
    sfTexture *plane_texture;
    sfTexture *tower_texture;
} texture_t;

typedef struct {
    plane_t *p;
    tower_t *t;
} object_t;

typedef struct {
    int S;
    int L;
    int len;
    int active_p;
    int time;
    float dt;
} info_t;

#endif /* OBJECTS_H_ */
