#pragma once
#include <vector>

using namespace std;

class AActor;

class UEngine
{
public:
	UEngine();
	virtual ~UEngine();
	
	void SpawnActor(AActor* NewActor);

	void Run();
	void LoadLevel(string MapFilename);
	bool IsRunning();

	void Input();
	void Tick();
	void Render();

	vector<AActor*> Actors;
};

