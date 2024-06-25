#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	int X;
	int Y;
	char Shape;

	void Input();
	void Tick();
	void Render();
};

