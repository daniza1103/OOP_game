//...............Класс PLAYER
//...............Файл типа .cpp

#include "pch.h"
#include "EASY_ENEMY.h"
#include "PLAYER.h"

//добавляем дополнительные очки (в XP) игроку в пределах от 300 до 500, если он победил в игре "орел и решка":
int PLAYER::Successful_Total_Score_PLAYER(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point) {
	srand(time(NULL));
	int PLAYER_points = 300 + rand() % 200;
	int Total_Points = 0;

	Total_Points = data_Power + data_Intellect + data_Endurance + data_Extra_Point + PLAYER_points;
	cout << Total_Points;
	cout << " XP";
	cout << "\n	\x1b[36mКоличество дополнительных очков: \x1b[0m" << PLAYER_points;
	return Total_Points;
}

//добавляем дополнительные очки (в XP) игроку в пределах от 50 до 100, если он проиграл в игре "орел и решка":
int PLAYER::Unsuccessful_Total_Score_PLAYER(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point) {
	srand(time(NULL));
	int PLAYER_points = 50 + rand() % 50;
	int Total_Points = 0;

	Total_Points = data_Power + data_Intellect + data_Endurance + data_Extra_Point + PLAYER_points;
	cout << Total_Points;
	cout << " XP";
	cout << "\n	\x1b[36mКоличество дополнительных очков: \x1b[0m" << PLAYER_points;
	return Total_Points;
}