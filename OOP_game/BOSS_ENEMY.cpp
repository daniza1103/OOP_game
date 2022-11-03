//...............Класс BOSS_ENEMY
//...............Файл типа .cpp

#include "pch.h"
#include "EASY_ENEMY.h"
#include "BOSS_ENEMY.h"

//добавляем дополнительные очки (в XP) противнику-боссу в пределах от 200 до 300:
int BOSS_ENEMY::Total_Score_BOSS(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point) {
	srand(time(NULL));
	int BOSS_points = 200 + rand() % 100;
	int Total_Points = 0;

	Total_Points = data_Power + data_Intellect + data_Endurance + data_Extra_Point + BOSS_points;
	cout << Total_Points;
	cout << " XP";
	cout << "\n	\x1b[36mКоличество дополнительных очков: \x1b[0m" << BOSS_points;
	return Total_Points;
}