#include "Monster.h"
#include <iostream>
using namespace std;

void Monster::AddMonster(sMonster m)
{
	monsters.push_back(m);
}

void Monster::addStage(sStage s)
{
	stages.push_back(s);
}

sMonster Monster::Find(int stage, int id)
{

	for (int i = 0; i < monsters.size(); i++)
	{
		if (stages[i].stage == stage && stages[i].id == id)
		{
			return monsters[i];
		}
	}

	return sMonster();
}

void Monster::showMonster()
{
	for (int i = 0; i < stages.size(); i++)
	{
		sMonster mm = Find(stages[i].stage, stages[i].id);

		cout << "-------------------------------------------" << endl;
		if (mm.stage == SHRINE)
		{
			cout << "계승의 제사장" << endl;
			cout << "이름 :" << mm.name << endl;
			cout << "체력 :" << mm.hp << endl;
			cout << "X :" << stages[i].x << endl;
			cout << "Y :" << stages[i].y << endl;
		}
		else
		{
			cout << "불사의 도시" << endl;
			cout << "이름 :" << mm.name << endl;
			cout << "체력 :" << mm.hp << endl;
			cout << "X :" << stages[i].x << endl;
			cout << "Y :" << stages[i].y << endl;
		}
		cout << "-------------------------------------------" << endl;
	}

}

