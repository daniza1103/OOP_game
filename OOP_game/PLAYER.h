//...............Класс PLAYER
//...............Файл типа .h

#pragma once
#include <iostream>
#include <string>

class PLAYER : protected EASY_ENEMY {     //производный класс 

public:
	//добавляем дополнительные очки (в XP) игроку в пределах от 300 до 500, если он победил в игре "орел и решка":
	int Successful_Total_Score_PLAYER(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);

	//добавляем дополнительные очки (в XP) игроку в пределах от 50 до 100, если он проиграл в игре "орел и решка":
	int Unsuccessful_Total_Score_PLAYER(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);

	EASY_ENEMY::Set_Specifications;
	EASY_ENEMY::Get_Specifications;
	EASY_ENEMY::Total_Score;
};