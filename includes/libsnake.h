#ifndef LIBSNAKE_H
#define LIBSNAKE_H
#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>

typedef struct Point Point;
struct Point
{
  int x;
  int y;
};

typedef struct Square Square;
struct Square
{
  Point p1;
  Point p2;
  Point p3;
  Point p4;
  SDL_Color color;
};

typedef struct Snake Snake;
struct Snake
{
  Square *square;
};


int setWindowColor(SDL_Renderer* renderer, SDL_Color color);
void SN_DrawSquare(Square s, SDL_Color color, SDL_Renderer *renderer);
Snake SN_InitSnake(Snake s);


#endif
