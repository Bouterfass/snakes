/*
 *
 *
 *
 *
 *  Initialise la taille et la position du serpent  
 *
 *
 *
 *
 */


#include   "../includes/libsnake.h"

Snake SN_InitSnake(Snake s)
{
  
  s.square = (Square*)malloc(sizeof(Square) * 10);

  s.square[0].p1.x = 100;
  s.square[0].p1.y = 100;

  s.square[0].p2.x = 100;
  s.square[0].p2.y = 125;

  s.square[0].p3.x = 125;
  s.square[0].p3.y = 100;

  s.square[0].p4.x = 125;
  s.square[0].p4.y = 125;
  
  for(int i = 1; i < 10; i++)
    {
      s.square[i].p1.x = s.square[i - 1].p3.x;
      s.square[i].p1.y = s.square[i - 1].p3.y;

      s.square[i].p2.x = s.square[i - 1].p4.x;
      s.square[i].p2.y = s.square[i - 1].p4.y;

      s.square[i].p3.x = s.square[i - 1].p3.x + 25;
      s.square[i].p3.y = s.square[i - 1].p1.y;

      s.square[i].p4.x = s.square[i - 1].p4.x + 25;
      s.square[i].p4.y = s.square[i - 1].p2.y;
    }
  return (s);
}
