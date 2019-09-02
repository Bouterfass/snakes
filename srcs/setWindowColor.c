


/*      Change la couleur de fond de la fenetre              */


#include "../includes/libsnake.h"

int setWindowColor(SDL_Renderer *renderer, SDL_Color color)
{
  
  if (SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a) < 0)
    return (-1);
  if (SDL_RenderClear(renderer) < 0)
    return (-1);
  return (0);
}
