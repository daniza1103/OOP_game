//...............����� EASY_ENEMY
//...............���� ���� .cpp

#include "pch.h"
#include "EASY_ENEMY.h"

//��������� ��������������:
void EASY_ENEMY::Set_Specifications(string data_Name, int data_Power, int data_Intellect, int data_Endurance, string data_Extra, int data_Extra_Point) {
	Name = data_Name;
	Power = data_Power;
	Intellect = data_Intellect;
	Endurance = data_Endurance;
	Extra = data_Extra;
	Extra_Point = data_Extra_Point;
}

//������� ��������������:
void EASY_ENEMY::Get_Specifications() {
	cout << "\n		���: " << Name;
	cout << "\n		����: " << Power << " XP";
	cout << "\n		��������: " << Intellect << " XP";
	cout << "\n		������������: " << Endurance << " XP";
	cout << "\n		�������������� �����������: " << Extra << ", ����������� " << Extra_Point << " XP";
}

//������������ ��������� ���������� ����� (� XP):
int EASY_ENEMY::Total_Score(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point) {
	int Total_Points = 0;
	Total_Points = data_Power + data_Intellect + data_Endurance + data_Extra_Point;
	cout << Total_Points;
	return Total_Points;
}