// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------
#include <iostream>
#include "Game.h"

int main(int argc, char** argv)
{
    std::string game_mode = "tile_map"; // Either of 'base', 'skelton', 'tile_map'
    
	Game game(game_mode);
    	
    bool success = game.Initialize();
    
	if (success)
	{
		game.RunLoop();
	}
	game.Shutdown();
	return 0;
}
