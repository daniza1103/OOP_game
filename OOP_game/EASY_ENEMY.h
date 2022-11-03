//...............����� EASY_ENEMY
//...............���� ���� .h

#pragma once
#include <iostream>
#include <string>

using namespace std;

class EASY_ENEMY {     //������� ����� 

protected: //������� ��������������: 
	string Name;       //��� 
	int Power;         //���� ���������� (� ����� XP)
	int Intellect;     //�������� (� ����� XP)
	int Endurance;     //������������ (� ����� XP)
	string Extra;      //�������� �������������� �����������
	int Extra_Point;   //�������������� ����������� (� ����� XP)

public: //������� ������:
	//��������� ��������������:
	void Set_Specifications(string data_Name, int data_Power, int data_Intellect, int data_Endurance, string data_Extra, int data_Extra_Point);

	//������� ��������������:
	void Get_Specifications();

	//������������ ��������� ���������� ����� (� XP) ����������:
	int Total_Score(int data_Power, int data_Intellect, int data_Endurance, int data_Extra_Point);
};