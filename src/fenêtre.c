#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
SDL_Window *window = NULL;

if(SDL_Init(SDL_INIT_VIDEO) != 0)
{
SDL_Log("ERREUR : Initialisation SDL > %s\n", SDL_GetError());
exit(EXIT_FAILURE); //Si il y a une erreur il s'arrete, il renvoie le message d'erreur
}
//execution du programme...  On definie [X](centre la fenêtre)V            Taille de la fenêtre [Y] V 
window = SDL_CreateWindow("Première fenêtre SDL 2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);

if(window == NULL)
{
SDL_Log("ERREUR : Creation de fenêtre échouée > %s\n", SDL_GetError());
                exit(EXIT_FAILURE);
}

SDL_Delay(5000);

SDL_Quit();

return EXIT_SUCCESS; //return(0);
}
