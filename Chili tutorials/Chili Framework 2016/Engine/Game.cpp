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
{//800x600 frame
	int x = 350;
	int y = 200;
	gfx.PutPixel(395+x, 300+y, 255, 255, 255);
	gfx.PutPixel(396+x, 300+y, 255, 255, 255);
	gfx.PutPixel(397+x, 300+y, 255, 255, 255);
	gfx.PutPixel(403+x, 300+y, 255, 255, 255);
	gfx.PutPixel(404+x, 300+y, 255, 255, 255);
	gfx.PutPixel(405+x, 300+y, 255, 255, 255);
	gfx.PutPixel(400+x, 295+y, 255, 255, 255);
	gfx.PutPixel(400+x, 296+y, 255, 255, 255);
	gfx.PutPixel(400+x, 297+y, 255, 255, 255);
	gfx.PutPixel(400+x, 303+y, 255, 255, 255);
	gfx.PutPixel(400+x, 304+y, 255, 255, 255);
	gfx.PutPixel(400+x, 305+y, 255, 255, 255);
}

