//...............����� BOSS_ENEMY
//...............���� ���� .h

#pragma once
#include <iostream>
#include <string>

class BOSS_ENEMY : protected EASY_ENEMY {     //����������� ����� 

public:
	//��������� �������������� ���� (� XP) ����������-����� � �������� �� 200 �� 300:
	int Total_Score_BOSS(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);
	EASY_ENEMY::Set_Specifications;
	EASY_ENEMY::Get_Specifications;
	EASY_ENEMY::Total_Score;
};