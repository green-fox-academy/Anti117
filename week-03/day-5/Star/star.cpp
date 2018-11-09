#include <iostream>
#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;


//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void function();

void draw() {
}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Checkerboard", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        function();
        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}

void function(){
    int aLines = SCREEN_WIDTH/2;
    int aLinee = SCREEN_WIDTH/2;
    int bLines = 0;
    int bLinee = SCREEN_WIDTH/2;
    for (int i = 0; i < SCREEN_HEIGHT/2; i =i + 15){
        SDL_SetRenderDrawColor(gRenderer, 50, 198, 33, 0xFF);
        SDL_RenderDrawLine(gRenderer, aLines, aLinee+i, bLines+i, bLinee);
    }
    int aLines1 = 0;
    int aLinee1 = SCREEN_WIDTH/2;
    int bLines1 = SCREEN_WIDTH/2;
    int bLinee1 = SCREEN_WIDTH/2;
    for (int j = 0; j < SCREEN_HEIGHT/2; j =j+15){
        SDL_SetRenderDrawColor(gRenderer, 50, 198, 33, 0xFF);
        SDL_RenderDrawLine(gRenderer, aLines1+j, aLinee1, bLines1, bLinee1-j);
    }
    int aLines2 = SCREEN_WIDTH;
    int aLinee2 = SCREEN_WIDTH/2;
    int bLines2 = SCREEN_WIDTH/2;
    int bLinee2 = SCREEN_WIDTH/2;
    for (int g = 0; g < SCREEN_HEIGHT/2; g =g+15){
        SDL_SetRenderDrawColor(gRenderer, 50, 198, 33, 0xFF);
        SDL_RenderDrawLine(gRenderer, aLines2-g, aLinee2, bLines2, bLinee2+g);
    }
    int aLines3 = SCREEN_WIDTH/2;
    int aLinee3 = SCREEN_WIDTH/2;
    int bLines3 = SCREEN_WIDTH/2;
    int bLinee3 = 0;
    for (int h =0; h < SCREEN_HEIGHT/2; h=h+15){
        SDL_SetRenderDrawColor(gRenderer, 50, 198, 33, 0xFF);
        SDL_RenderDrawLine(gRenderer, aLines3+h, aLinee3, bLines3, bLinee3+h);
    }

}