#include "Actor.h"
#include "SDL.h"
#include "Engine.h"

#include <iostream>
#include <windows.h>

AActor::AActor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
}

AActor::~AActor()
{
}

void AActor::Input()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	std::cout << Shape;
}
