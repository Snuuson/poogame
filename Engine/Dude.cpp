#include "Dude.h"
#include "Graphics.h"

void Dude::ClampToScreen()
{
	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
	}
	else if( right >= (float)Graphics::ScreenWidth )
	{
		x = (float)(Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
	}
	else if( bottom >= (float)Graphics::ScreenHeight )
	{
		y = (float)(Graphics::ScreenHeight - 1) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	
	int x_float = (int)x;
	int y_float = (int)y;
	gfx.PutPixel( 7 + x_float,0 + y_float,0,0,0 );
	gfx.PutPixel( 8 + x_float,0 + y_float,0,0,0 );
	gfx.PutPixel( 9 + x_float,0 + y_float,0,0,0 );
	gfx.PutPixel( 10 + x_float,0 + y_float,0,0,0 );
	gfx.PutPixel( 11 + x_float,0 + y_float,0,0,0 );
	gfx.PutPixel( 12 + x_float,0 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,1 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,1 + y_float,0,0,0 );
	gfx.PutPixel( 7 + x_float,1 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,1 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,1 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,1 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,1 + y_float,254,221,88 );
	gfx.PutPixel( 12 + x_float,1 + y_float,254,221,88 );
	gfx.PutPixel( 13 + x_float,1 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,1 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,2 + y_float,0,0,0 );
	gfx.PutPixel( 4 + x_float,2 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 12 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 13 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 14 + x_float,2 + y_float,254,221,88 );
	gfx.PutPixel( 15 + x_float,2 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,2 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,3 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 5 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 12 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 13 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 14 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 15 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,3 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,3 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,4 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 5 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 12 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 13 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 14 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 15 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,4 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,4 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 3 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 4 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 12 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 13 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 15 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,5 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,5 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,6 + y_float,255,255,255 );
	gfx.PutPixel( 4 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,6 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,6 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,6 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,6 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 11 + x_float,6 + y_float,255,255,255 );
	gfx.PutPixel( 12 + x_float,6 + y_float,255,255,255 );
	gfx.PutPixel( 13 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 15 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,6 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,6 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,6 + y_float,0,0,0 );
	gfx.PutPixel( 0 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,7 + y_float,255,255,255 );
	gfx.PutPixel( 3 + x_float,7 + y_float,255,255,255 );
	gfx.PutPixel( 4 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 11 + x_float,7 + y_float,255,255,255 );
	gfx.PutPixel( 12 + x_float,7 + y_float,255,255,255 );
	gfx.PutPixel( 13 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 15 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,7 + y_float,254,221,88 );
	gfx.PutPixel( 19 + x_float,7 + y_float,0,0,0 );
	gfx.PutPixel( 0 + x_float,8 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,8 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 3 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 4 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 5 + x_float,8 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,8 + y_float,0,0,0 );
	gfx.PutPixel( 11 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 12 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 13 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 14 + x_float,8 + y_float,255,255,255 );
	gfx.PutPixel( 15 + x_float,8 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,8 + y_float,254,221,88 );
	gfx.PutPixel( 19 + x_float,8 + y_float,0,0,0 );
	gfx.PutPixel( 0 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 2 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 4 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 12 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 13 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 15 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,9 + y_float,254,221,88 );
	gfx.PutPixel( 19 + x_float,9 + y_float,0,0,0 );
	gfx.PutPixel( 0 + x_float,10 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 2 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 3 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 5 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 12 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 13 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 14 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 15 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,10 + y_float,254,221,88 );
	gfx.PutPixel( 19 + x_float,10 + y_float,0,0,0 );
	gfx.PutPixel( 0 + x_float,11 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 2 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 3 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 5 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 7 + x_float,11 + y_float,20,14,18 );
	gfx.PutPixel( 8 + x_float,11 + y_float,18,11,14 );
	gfx.PutPixel( 9 + x_float,11 + y_float,18,12,14 );
	gfx.PutPixel( 10 + x_float,11 + y_float,18,12,14 );
	gfx.PutPixel( 11 + x_float,11 + y_float,21,13,16 );
	gfx.PutPixel( 12 + x_float,11 + y_float,24,11,15 );
	gfx.PutPixel( 13 + x_float,11 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 15 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,11 + y_float,254,221,88 );
	gfx.PutPixel( 19 + x_float,11 + y_float,0,0,0 );
	gfx.PutPixel( 0 + x_float,12 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 2 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 3 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 5 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 6 + x_float,12 + y_float,23,9,23 );
	gfx.PutPixel( 7 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 8 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 9 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 10 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 11 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 12 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 13 + x_float,12 + y_float,135,26,68 );
	gfx.PutPixel( 14 + x_float,12 + y_float,0,0,0 );
	gfx.PutPixel( 15 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 16 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,12 + y_float,254,221,88 );
	gfx.PutPixel( 19 + x_float,12 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,13 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,13 + y_float,254,221,88 );
	gfx.PutPixel( 3 + x_float,13 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,13 + y_float,254,221,88 );
	gfx.PutPixel( 5 + x_float,13 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 7 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 8 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 9 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 10 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 11 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 12 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 13 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 14 + x_float,13 + y_float,135,26,68 );
	gfx.PutPixel( 15 + x_float,13 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,13 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,13 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,13 + y_float,0,0,0 );
	gfx.PutPixel( 1 + x_float,14 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,14 + y_float,254,221,88 );
	gfx.PutPixel( 3 + x_float,14 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,14 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,14 + y_float,135,26,68 );
	gfx.PutPixel( 6 + x_float,14 + y_float,135,26,68 );
	gfx.PutPixel( 7 + x_float,14 + y_float,135,26,68 );
	gfx.PutPixel( 8 + x_float,14 + y_float,135,26,68 );
	gfx.PutPixel( 9 + x_float,14 + y_float,251,192,224 );
	gfx.PutPixel( 10 + x_float,14 + y_float,251,192,224 );
	gfx.PutPixel( 11 + x_float,14 + y_float,251,192,224 );
	gfx.PutPixel( 12 + x_float,14 + y_float,251,192,224 );
	gfx.PutPixel( 13 + x_float,14 + y_float,135,26,68 );
	gfx.PutPixel( 14 + x_float,14 + y_float,135,26,68 );
	gfx.PutPixel( 15 + x_float,14 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,14 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,14 + y_float,254,221,88 );
	gfx.PutPixel( 18 + x_float,14 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,15 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,15 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,15 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,15 + y_float,135,26,68 );
	gfx.PutPixel( 6 + x_float,15 + y_float,135,26,68 );
	gfx.PutPixel( 7 + x_float,15 + y_float,135,26,68 );
	gfx.PutPixel( 8 + x_float,15 + y_float,251,192,224 );
	gfx.PutPixel( 9 + x_float,15 + y_float,251,192,224 );
	gfx.PutPixel( 10 + x_float,15 + y_float,251,192,224 );
	gfx.PutPixel( 11 + x_float,15 + y_float,251,192,224 );
	gfx.PutPixel( 12 + x_float,15 + y_float,251,192,224 );
	gfx.PutPixel( 13 + x_float,15 + y_float,251,192,224 );
	gfx.PutPixel( 14 + x_float,15 + y_float,135,26,68 );
	gfx.PutPixel( 15 + x_float,15 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,15 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,15 + y_float,0,0,0 );
	gfx.PutPixel( 2 + x_float,16 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,16 + y_float,254,221,88 );
	gfx.PutPixel( 4 + x_float,16 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,16 + y_float,135,26,68 );
	gfx.PutPixel( 6 + x_float,16 + y_float,135,26,68 );
	gfx.PutPixel( 7 + x_float,16 + y_float,135,26,68 );
	gfx.PutPixel( 8 + x_float,16 + y_float,251,192,224 );
	gfx.PutPixel( 9 + x_float,16 + y_float,251,192,224 );
	gfx.PutPixel( 10 + x_float,16 + y_float,251,192,224 );
	gfx.PutPixel( 11 + x_float,16 + y_float,251,192,224 );
	gfx.PutPixel( 12 + x_float,16 + y_float,251,192,224 );
	gfx.PutPixel( 13 + x_float,16 + y_float,251,192,224 );
	gfx.PutPixel( 14 + x_float,16 + y_float,135,26,68 );
	gfx.PutPixel( 15 + x_float,16 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,16 + y_float,254,221,88 );
	gfx.PutPixel( 17 + x_float,16 + y_float,0,0,0 );
	gfx.PutPixel( 3 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 4 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 7 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 8 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 9 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 10 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 11 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 12 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 13 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 15 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 16 + x_float,17 + y_float,0,0,0 );
	gfx.PutPixel( 5 + x_float,18 + y_float,0,0,0 );
	gfx.PutPixel( 6 + x_float,18 + y_float,0,0,0 );
	gfx.PutPixel( 7 + x_float,18 + y_float,254,221,88 );
	gfx.PutPixel( 8 + x_float,18 + y_float,254,221,88 );
	gfx.PutPixel( 9 + x_float,18 + y_float,254,221,88 );
	gfx.PutPixel( 10 + x_float,18 + y_float,254,221,88 );
	gfx.PutPixel( 11 + x_float,18 + y_float,254,221,88 );
	gfx.PutPixel( 12 + x_float,18 + y_float,254,221,88 );
	gfx.PutPixel( 13 + x_float,18 + y_float,0,0,0 );
	gfx.PutPixel( 14 + x_float,18 + y_float,0,0,0 );
	gfx.PutPixel( 7 + x_float,19 + y_float,0,0,0 );
	gfx.PutPixel( 8 + x_float,19 + y_float,0,0,0 );
	gfx.PutPixel( 9 + x_float,19 + y_float,0,0,0 );
	gfx.PutPixel( 10 + x_float,19 + y_float,0,0,0 );
	gfx.PutPixel( 11 + x_float,19 + y_float,0,0,0 );
	gfx.PutPixel( 12 + x_float,19 + y_float,0,0,0 );
}

void Dude::Update( const Keyboard & kbd )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed;
	}
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
