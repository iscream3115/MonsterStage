#pragma once
#include <string>
#include <vector>

enum STAGE
{
	SHRINE = 1,
	CITY
};


struct sMonster
{
	int stage;
	int id;
	std::string name;
	int hp;
};

struct sStage
{
	int stage;
	int id;
	int x;
	int y;
};

class Monster
{
private:
	std::vector<sMonster> monsters;
	std::vector<sStage> stages;
public:
	void AddMonster(sMonster m);
	void addStage(sStage s);
	sMonster Find(int stage, int id);
	void showMonster();

};


