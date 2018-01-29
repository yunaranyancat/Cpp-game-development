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
	const int x = 400;
	const int y = 300;

	const int disp = 50;
	//direction
	const bool key_up = wnd.kbd.KeyIsPressed(VK_UP); 
	const bool key_down = wnd.kbd.KeyIsPressed(VK_DOWN);
	const bool key_left = wnd.kbd.KeyIsPressed(VK_LEFT);
	const bool key_right = wnd.kbd.KeyIsPressed(VK_RIGHT);

	const bool key_control = wnd.kbd.KeyIsPressed(VK_CONTROL); //colour
	const bool key_shift = wnd.kbd.KeyIsPressed(VK_SHIFT); //shape

	if (!key_shift) {
		if (key_up)
		{
			if (key_left) {
				gfx.PutPixel(-5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y - disp, 255, 255, 255);
			}
			else if (key_down) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else if (key_right) {
				gfx.PutPixel(-5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y - disp, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(x, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, +5 + y - disp, 255, 255, 255);

			}
		}
		else if (key_down)
		{
			/*gfx.PutPixel(-5 + x, y, 255, 0, 0);
			gfx.PutPixel(-4 + x, y, 255, 0, 0);
			gfx.PutPixel(-3 + x, y, 255, 0, 0);
			gfx.PutPixel(5 + x, y, 255, 0, 0);
			gfx.PutPixel(4 + x, y, 255, 0, 0);
			gfx.PutPixel(5 + x, y, 255, 0, 0);
			gfx.PutPixel(x, -5 + y, 255, 0, 0);
			gfx.PutPixel(x, -4 + y, 255, 0, 0);
			gfx.PutPixel(x, -3 + y, 255, 0, 0);
			gfx.PutPixel(x, +3 + y, 255, 0, 0);
			gfx.PutPixel(x, +4 + y, 255, 0, 0);
			gfx.PutPixel(x, +5 + y, 255, 0, 0);*/

			if (key_left) {
				gfx.PutPixel(-5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y + disp, 255, 255, 255);
			}
			else if (key_up) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else if (key_right) {
				gfx.PutPixel(-5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y + disp, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(x, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, +5 + y + disp, 255, 255, 255);

			}
		}
		else if (key_right) {
			if (key_left) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else if (key_down) {
				gfx.PutPixel(-5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y + disp, 255, 255, 255);
			}
			else if (key_up) {
				gfx.PutPixel(-5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y - disp, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y, 255, 255, 255);

			}

		}
		else if (key_left) {
			if (key_up) {
				gfx.PutPixel(-5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y - disp, 255, 255, 255);
			}
			else if (key_down) {
				gfx.PutPixel(-5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y + disp, 255, 255, 255);
			}
			else if (key_right) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y, 255, 255, 255);

			}
		}
		else {
			gfx.PutPixel(-5 + x, y, 255, 255, 255);
			gfx.PutPixel(-4 + x, y, 255, 255, 255);
			gfx.PutPixel(-3 + x, y, 255, 255, 255);
			gfx.PutPixel(5 + x, y, 255, 255, 255);
			gfx.PutPixel(4 + x, y, 255, 255, 255);
			gfx.PutPixel(5 + x, y, 255, 255, 255);
			gfx.PutPixel(x, -5 + y, 255, 255, 255);
			gfx.PutPixel(x, -4 + y, 255, 255, 255);
			gfx.PutPixel(x, -3 + y, 255, 255, 255);
			gfx.PutPixel(x, +3 + y, 255, 255, 255);
			gfx.PutPixel(x, +4 + y, 255, 255, 255);
			gfx.PutPixel(x, +5 + y, 255, 255, 255);
		}

	}
	else if(key_shift){
		if (key_up)
		{
			if (key_left) {
				gfx.PutPixel(-5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y - disp, 255, 255, 255);
			}
			else if (key_down) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else if (key_right) {
				gfx.PutPixel(-5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y - disp, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y - disp, 255, 255, 255);
				gfx.PutPixel(x, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x, +5 + y - disp, 255, 255, 255);

			}
		}
		else if (key_down)
		{
			/*gfx.PutPixel(-5 + x, y, 255, 0, 0);
			gfx.PutPixel(-4 + x, y, 255, 0, 0);
			gfx.PutPixel(-3 + x, y, 255, 0, 0);
			gfx.PutPixel(5 + x, y, 255, 0, 0);
			gfx.PutPixel(4 + x, y, 255, 0, 0);
			gfx.PutPixel(5 + x, y, 255, 0, 0);
			gfx.PutPixel(x, -5 + y, 255, 0, 0);
			gfx.PutPixel(x, -4 + y, 255, 0, 0);
			gfx.PutPixel(x, -3 + y, 255, 0, 0);
			gfx.PutPixel(x, +3 + y, 255, 0, 0);
			gfx.PutPixel(x, +4 + y, 255, 0, 0);
			gfx.PutPixel(x, +5 + y, 255, 0, 0);*/

			if (key_left) {
				gfx.PutPixel(-5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y + disp, 255, 255, 255);
			}
			else if (key_up) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else if (key_right) {
				gfx.PutPixel(-5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y + disp, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x, y + disp, 255, 255, 255);
				gfx.PutPixel(x, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x, +5 + y + disp, 255, 255, 255);

			}
		}
		else if (key_right) {
			if (key_left) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else if (key_down) {
				gfx.PutPixel(-5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y + disp, 255, 255, 255);
			}
			else if (key_up) {
				gfx.PutPixel(-5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y - disp, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(-4 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(-3 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(4 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x + disp, y, 255, 255, 255);
				gfx.PutPixel(x + disp, -5 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, -4 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, -3 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, +3 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, +4 + y, 255, 255, 255);
				gfx.PutPixel(x + disp, +5 + y, 255, 255, 255);

			}

		}
		else if (key_left) {
			if (key_up) {
				gfx.PutPixel(-5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y - disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y - disp, 255, 255, 255);
			}
			else if (key_down) {
				gfx.PutPixel(-5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y + disp, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y + disp, 255, 255, 255);
			}
			else if (key_right) {
				gfx.PutPixel(-5 + x, y, 255, 255, 255);
				gfx.PutPixel(-4 + x, y, 255, 255, 255);
				gfx.PutPixel(-3 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(4 + x, y, 255, 255, 255);
				gfx.PutPixel(5 + x, y, 255, 255, 255);
				gfx.PutPixel(x, -5 + y, 255, 255, 255);
				gfx.PutPixel(x, -4 + y, 255, 255, 255);
				gfx.PutPixel(x, -3 + y, 255, 255, 255);
				gfx.PutPixel(x, +3 + y, 255, 255, 255);
				gfx.PutPixel(x, +4 + y, 255, 255, 255);
				gfx.PutPixel(x, +5 + y, 255, 255, 255);
			}
			else {
				gfx.PutPixel(-5 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(-4 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(-3 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(4 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(5 + x - disp, y, 255, 255, 255);
				gfx.PutPixel(x - disp, -5 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, -4 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, -3 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, +3 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, +4 + y, 255, 255, 255);
				gfx.PutPixel(x - disp, +5 + y, 255, 255, 255);

			}
		}
		else {
			gfx.PutPixel(-5 + x, y, 255, 255, 255);
			gfx.PutPixel(-4 + x, y, 255, 255, 255);
			gfx.PutPixel(-3 + x, y, 255, 255, 255);
			gfx.PutPixel(5 + x, y, 255, 255, 255);
			gfx.PutPixel(4 + x, y, 255, 255, 255);
			gfx.PutPixel(5 + x, y, 255, 255, 255);
			gfx.PutPixel(x, -5 + y, 255, 255, 255);
			gfx.PutPixel(x, -4 + y, 255, 255, 255);
			gfx.PutPixel(x, -3 + y, 255, 255, 255);
			gfx.PutPixel(x, +3 + y, 255, 255, 255);
			gfx.PutPixel(x, +4 + y, 255, 255, 255);
			gfx.PutPixel(x, +5 + y, 255, 255, 255);
		}
	
	
	}


