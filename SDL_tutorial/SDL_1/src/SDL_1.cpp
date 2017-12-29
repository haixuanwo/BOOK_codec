//============================================================================
// Name        : SDL_1.cpp
// Author      : tanxiaohai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "SDL/SDL.h"
int main( int argc, char* args[] )
{
    //启动SDL
    SDL_Init( SDL_INIT_EVERYTHING );

    //退出SDL
    SDL_Quit();

    return 0;
}
