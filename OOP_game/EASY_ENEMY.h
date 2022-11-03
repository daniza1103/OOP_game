//...............Класс EASY_ENEMY
//...............Файл типа .h

#pragma once
#include <iostream>
#include <string>

using namespace std;

class EASY_ENEMY {     //базовый класс 

protected: //зададим характеристики: 
	string Name;       //имя 
	int Power;         //сила противника (в очках XP)
	int Intellect;     //смекалка (в очках XP)
	int Endurance;     //выносливость (в очках XP)
	string Extra;      //название дополнительная способность
	int Extra_Point;   //дополнительная способность (в очках XP)

public: //зададим методы:
	//добавляем характеристики:
	void Set_Specifications(string data_Name, int data_Power, int data_Intellect, int data_Endurance, string data_Extra, int data_Extra_Point);

	//выводим характеристики:
	void Get_Specifications();

	//подсчитываем суммарное количество очков (в XP) противника:
	int Total_Score(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);
};