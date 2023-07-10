#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Monster.h"

using namespace std;


int main()
{
	Monster m;

	sMonster sM;
	sStage sS;

	{
		ifstream fs;
		fs.open("monster.csv");

		string str;
		int index = 0;

		while (!fs.eof())
		{
			getline(fs, str);

			for (int i = 0; i < str.size(); i++)
			{
				if (str[i] == ',') str[i] = ' ';
			}

			int stage, ID, HP;
			string name;
			stringstream ss(str);
			ss >> stage >> ID >> name >> HP;

			sM.stage = stage;
			sM.id = ID;
			sM.name = name;
			sM.hp = HP;

			m.AddMonster(sM);
		}

		fs.close();
	}

	{
		ifstream fs;
		fs.open("stage.csv");

		string str;
		int index = 0;

		while (!fs.eof())
		{
			getline(fs, str);

			for (int i = 0; i < str.size(); i++)
			{
				if (str[i] == ',') str[i] = ' ';
			}

			int stage, ID, X, Y;
			stringstream ss(str);
			ss >> stage >> ID >> X >> Y;

			sS.stage = stage;
			sS.id = ID;
			sS.x = X;
			sS.y = Y;

			m.addStage(sS);

		}

		fs.close();
	}

	m.showMonster();



	return 0;
}