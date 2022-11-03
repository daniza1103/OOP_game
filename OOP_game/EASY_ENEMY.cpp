//...............Класс EASY_ENEMY
//...............Файл типа .cpp

#include "pch.h"
#include "EASY_ENEMY.h"

//добавляем характеристики:
void EASY_ENEMY::Set_Specifications(string data_Name, int data_Power, int data_Intellect, int data_Endurance, string data_Extra, int data_Extra_Point) {
	Name = data_Name;
	Power = data_Power;
	Intellect = data_Intellect;
	Endurance = data_Endurance;
	Extra = data_Extra;
	Extra_Point = data_Extra_Point;
}

//выводим характеристики:
void EASY_ENEMY::Get_Specifications() {
	cout << "\n		Имя: " << Name;
	cout << "\n		Сила: " << Power << " XP";
	cout << "\n		Смекалка: " << Intellect << " XP";
	cout << "\n		Выносливость: " << Endurance << " XP";
	cout << "\n		Дополнительная способность: " << Extra << ", добавляющая " << Extra_Point << " XP";
}

//подсчитываем суммарное количество очков (в XP):
int EASY_ENEMY::Total_Score(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point) {
	int Total_Points = 0;
	Total_Points = data_Power + data_Intellect + data_Endurance + data_Extra_Point;
	cout << Total_Points;
	return Total_Points;
}