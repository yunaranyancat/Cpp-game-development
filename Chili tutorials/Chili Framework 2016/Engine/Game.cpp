/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	const int x_base = 400;
	const int y_base = 300;
	const int max_light = 255;

	const bool cond = wnd.kbd.KeyIsPressed(VK_UP); //windows.keyboard.keypressed.UP

	if (cond)
	{
		if (wnd.kbd.KeyIsPressed(VK_DOWN)) {
			gfx.PutPixel(-5 + x_base, y_base, max_light, 255, 255);
			gfx.PutPixel(-4 + x_base, y_base, 255, 255, 255);
			gfx.PutPixel(-3 + x_base, y_base, 255, 255, 255);
			gfx.PutPixel(5 + x_base, y_base, 255, 255, 255);
			gfx.PutPixel(4 + x_base, y_base, 255, 255, 255);
			gfx.PutPixel(5 + x_base, y_base, 255, 255, 255);
			gfx.PutPixel(x_base, -5 + y_base, 255, 255, 255);
			gfx.PutPixel(x_base, -4 + y_base, 255, 255, 255);
			gfx.PutPixel(x_base, -3 + y_base, 255, 255, 255);
			gfx.PutPixel(x_base, +3 + y_base, 255, 255, 255);
			gfx.PutPixel(x_base, +4 + y_base, 255, 255, 255);
			gfx.PutPixel(x_base, +5 + y_base, 255, 255, 255);
		}
	}
	else if( wnd.kbd.KeyIsPressed(VK_DOWN) )
	{
		gfx.PutPixel(-5 + x_base, y_base, max_light, 0, 255);
		gfx.PutPixel(-4 + x_base, y_base, 255, 0, 255);
		gfx.PutPixel(-3 + x_base, y_base, 255, 0, 255);
		gfx.PutPixel(5 + x_base, y_base, 255, 0, 255);
		gfx.PutPixel(4 + x_base, y_base, 255, 0, 255);
		gfx.PutPixel(5 + x_base, y_base, 255, 0, 255);
		gfx.PutPixel(x_base, -5 + y_base, 255, 0, 255);
		gfx.PutPixel(x_base, -4 + y_base, 255, 0, 255);
		gfx.PutPixel(x_base, -3 + y_base, 255, 0, 255);
		gfx.PutPixel(x_base, +3 + y_base, 255, 0, 255);
		gfx.PutPixel(x_base, +4 + y_base, 255, 0, 255);
		gfx.PutPixel(x_base, +5 + y_base, 255, 0, 255);
	}
	else {}


}

