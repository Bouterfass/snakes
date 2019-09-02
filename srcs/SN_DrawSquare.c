

/*      Remplir le Snake d'une couleur      */


#include "../includes/libsnake.h"

void SN_DrawSquare(Square sq, SDL_Color color, SDL_Renderer *ren)
{
  sq.color = color;
  SDL_SetRenderDrawColor(ren, color.r, color.g, color.b, color.a);
  for (int i = sq.p1.y; i < sq.p2.y; i++)
    {
      for (int j = sq.p1.x; j < sq.p3.x; j++)
	{
	  SDL_RenderDrawPoint(ren, i, j);
	}
    }
  
}
