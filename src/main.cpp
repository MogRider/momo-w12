#include <iostream>
#include <SDL.h>


int main(int argc, char *argv[])
{   
    // Initialisation de SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_Log("Erreur lors de l'initialisation de SDL : %s", SDL_GetError());
        return -1;
    }
    std::cout << "SDL Initialisé !" << std::endl;

    // Création de la fenêtre SDL avec la hauteur et la largeur saisies
    SDL_Window *window = SDL_CreateWindow("Ma Première Fenêtre SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600,800, SDL_WINDOW_SHOWN);
    
    if (window == nullptr)
    {
        SDL_Log("Erreur lors de la création de la fenêtre : %s", SDL_GetError());
        SDL_Quit();
        return -1;
    }
    /*
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 230, 122, 100, 140);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    // Pause pour montrer la fenêtre (vous pouvez ajuster ou retirer cela)w
    */
    SDL_Delay(100000); // Pause de 5 secondes

    // Libérer les ressources et quitter SDL
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
