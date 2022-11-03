//...............����� PLAYER
//...............���� ���� .h

#pragma once
#include <iostream>
#include <string>

class PLAYER : protected EASY_ENEMY {     //����������� ����� 

public:
	//��������� �������������� ���� (� XP) ������ � �������� �� 300 �� 500, ���� �� ������� � ���� "���� � �����":
	int Successful_Total_Score_PLAYER(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);

	//��������� �������������� ���� (� XP) ������ � �������� �� 50 �� 100, ���� �� �������� � ���� "���� � �����":
	int Unsuccessful_Total_Score_PLAYER(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);

	EASY_ENEMY::Set_Specifications;
	EASY_ENEMY::Get_Specifications;
	EASY_ENEMY::Total_Score;
};