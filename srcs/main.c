
















#include <../includes/libsnake.h>

int main()
{
  int status = EXIT_FAILURE;
  //Démarrer SDL
  if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
      fprintf(stdout, "Echec de l'initialisation de la SDL (%s)\n", SDL_GetError());
      return (-1);
    }

  SDL_Window* pWindow = NULL;
  SDL_Renderer* renderer = NULL;
  SDL_Color orange = {39,42, 209, 255};
  SDL_Color couleur = {175, 39, 209, 255};
  
  // Initialisation de la fenêtre
  pWindow = SDL_CreateWindow("Mon premier jeu !", SDL_WINDOWPOS_UNDEFINED,
			     SDL_WINDOWPOS_UNDEFINED,
			     800,
			     580,
			     SDL_WINDOW_SHOWN);
  if ( pWindow == NULL)
    {
      fprintf(stderr, "Erreur SDL_CreateWindow %s", SDL_GetError());
      goto Quit;
    }
  renderer = SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_ACCELERATED);
  if (renderer == NULL)
    {
      fprintf(stderr, "Erreur SDL_CreateRenderer %s", SDL_GetError());
    }
  
  setWindowColor(renderer, orange); /* Change la couleur du fond d'écran */
  

  SDL_RenderPresent(renderer); /* Mise a jour de l'affichage */


  Snake s;

  s = SN_InitSnake(s);
  /* Faire attention a la  superposition des couleur et  de  la mise a jour */
  setWindowColor(renderer, orange);

 
  for (int i = 0; i < 10; i++)
    {
      //     printf("carre numero %d\n\n", i);
      
      // printf("les p p1 p2 p3 p4\n");
      // printf("les x %d %d %d %d\n", s.square[i].p1.x, s.square[i].p2.x, s.square[i].p3.x, s.square[i].p4.x);
      // printf("les y %d %d %d %d\n-------------------\n", s.square[i].p1.y, s.square[i].p2.y, s.square[i].p3.y, s.square[i].p4.y);
      SN_DrawSquare(s.square[i], couleur, renderer);
      }
    

  SDL_RenderPresent(renderer);
  status = EXIT_SUCCESS;
  SDL_Delay(60000);

 Quit:
  if (renderer == NULL)
    SDL_DestroyRenderer(renderer);
  if (pWindow == NULL)
    SDL_DestroyWindow(pWindow);
  //Quitter SDL
  SDL_Quit();
  return (status);
}
