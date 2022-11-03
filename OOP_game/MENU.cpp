//...............���������������� ����
//...............���� ���� .cpp

#include "pch.h"
#include "EASY_ENEMY.h"
#include "BOSS_ENEMY.h"
#include "MENU.h"

void MENU::e_Print_MENU() {
	system("CLS");
	cout << "\n	\x1b[32m������� 3 ���������� ������� ������...\x1b[0m" << endl;
	cout << "\n	Blaze - 1";
	cout << "\n	Ermac - 2";
	cout << "\n	Khameleon - 3";
	cout << "\n" << "\n";
}

int MENU::e_Character_1(EASY_ENEMY e_enemy1, EASY_ENEMY e_total) {
	cout << "\n	��� ������� ��������� ������� ������ ��� ������� 1! ��� ��� ��������������: " << endl;
	e_enemy1.Set_Specifications("Blaze", 100, 50, 90, "Fireballs", 70);
	e_enemy1.Get_Specifications(); cout << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = e_total.Total_Score(100, 50, 90, 70); cout << " XP" << endl << endl;
	return total;
}

int MENU::e_Character_2(EASY_ENEMY e_enemy2, EASY_ENEMY e_total) {
	cout << "\n	��� ������� ��������� ������� ������ ��� ������� 2! ��� ��� ��������������: " << endl;
	e_enemy2.Set_Specifications("Ermac", 70, 100, 50, "Telekinesis", 30);
	e_enemy2.Get_Specifications(); cout << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = e_total.Total_Score(70, 100, 50, 30); cout << " XP" << endl << endl;
	return total;
}

int MENU::e_Character_3(EASY_ENEMY e_enemy3, EASY_ENEMY e_total) {
	cout << "\n	��� ������� ��������� ������� ������ ��� ������� 3! ��� ��� ��������������: " << endl;
	e_enemy3.Set_Specifications("Khameleon", 40, 100, 100, "Invisibility", 50);
	e_enemy3.Get_Specifications(); cout << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = e_total.Total_Score(40, 100, 100, 50); cout << " XP" << endl << endl;
	return total;
}

void MENU::b_Print_MENU() {
	system("PAUSE");
	system("CLS");
	cout << "\n	\x1b[31m����� ������� 3 ���������� �������� ������ (����������-�����)...\x1b[0m" << endl;
	cout << "\n	Sub-Zero - 4";
	cout << "\n	Raiden - 5";
	cout << "\n	Scorpion - 6";
	cout << endl;
	cout << "\n	���� �������� �������� ��� ����������! ";
	cout << "\n" << "\n";
	system("PAUSE");
	system("CLS");
}

int MENU::b_Character_1(BOSS_ENEMY b_enemy1, BOSS_ENEMY b_total) {
	cout << "\n	�, ���! ��� ������� ��������� �������� ������ ��� ������� 4! ��� ��� ��������������: " << endl;
	b_enemy1.Set_Specifications("Sub-Zero", 200, 300, 100, "DeathFreeze", 90);
	b_enemy1.Get_Specifications(); cout << endl;
	cout << "\n	�.�. ������ ��������� �������� ������, � ��� ���������� ���������� �����";
	cout << "\n	����������� �������������� ���� � �������� �� 200 �� 300..." << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = b_total.Total_Score_BOSS(200, 300, 100, 90); cout << " XP" << endl << endl;
	return total;
}

int MENU::b_Character_2(BOSS_ENEMY b_enemy2, BOSS_ENEMY b_total) {
	cout << "\n	�, ���! ��� ������� ��������� �������� ������ ��� ������� 5! ��� ��� ��������������: " << endl;
	b_enemy2.Set_Specifications("Raiden", 70, 200, 300, "Thunderstorm", 100);
	b_enemy2.Get_Specifications(); cout << endl;
	cout << "\n	�.�. ������ ��������� �������� ������, � ��� ���������� ���������� �����";
	cout << "\n	����������� �������������� ���� � �������� �� 200 �� 300..." << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = b_total.Total_Score_BOSS(70, 200, 300, 100); cout << " XP" << endl << endl;
	return total;
}

int MENU::b_Character_3(BOSS_ENEMY b_enemy3, BOSS_ENEMY b_total) {
	cout << "\n	�, ���! ��� ������� ��������� �������� ������ ��� ������� 6! ��� ��� ��������������: " << endl;
	b_enemy3.Set_Specifications("Scorpion", 100, 200, 80, "Poisoning", 90);
	b_enemy3.Get_Specifications(); cout << endl;
	cout << "\n	�.�. ������ ��������� �������� ������, � ��� ���������� ���������� �����";
	cout << "\n	����������� �������������� ���� � �������� �� 200 �� 300..." << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = b_total.Total_Score_BOSS(100, 200, 80, 90); cout << " XP" << endl << endl;
	return total;
}

void MENU::p_Print_MENU() {
	system("PAUSE");
	system("CLS");
	cout << "\n	\x1b[36m����� ������� ������ ���������! \x1b[0m" << endl;
	cout << "\n	������ �� ����� ������������� ����� ��������� �������� �������, �.�. 100 ��.";
	cout << "\n	����� �������� �������������� ����, ��������� �������!";
	cout << "\n	� ����������� �� ����, �������� �� ��, ��� ������ (���� ��� �����), ��� ���������� ����.";
	cout << "\n	�������� - �������� ������ �����, �� �������� - �������� ������ �����." << endl;
	cout << "\n	������� ����������! ��� �������, ��� ������? �����: ";
}

int MENU::s_player_Character(PLAYER player, PLAYER p_total) {
	cout << "\n	����� ���������... " << endl;
	player.Set_Specifications("�����", 100, 100, 100, "Precise attack", 100);
	player.Get_Specifications(); cout << endl;
	cout << "\n	�.�. �� �������� ���� '���� � �����', � ������ ���������� ���������� �����";
	cout << "\n	����������� �������������� ���� � �������� �� 300 �� 500..." << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = p_total.Successful_Total_Score_PLAYER(100, 100, 100, 100); cout << " XP" << endl;
	cout << endl;
	system("PAUSE");
	return total;
}

int MENU::un_player_Character(PLAYER player, PLAYER p_total) {
	cout << "\n	����� ���������... " << endl;
	player.Set_Specifications("�����", 100, 100, 100, "Precise attack", 100);
	player.Get_Specifications(); cout << endl;
	cout << "\n	�.�. �� ��������� ���� '���� � �����', � ������ ���������� ���������� �����";
	cout << "\n	����������� �������������� ���� � �������� �� 50 �� 100..." << endl;
	cout << "\n	\x1b[36m�����, ��������� ���������� �����: \x1b[0m";
	int total = p_total.Unsuccessful_Total_Score_PLAYER(100, 100, 100, 100); cout << " XP" << endl;
	cout << endl;
	system("PAUSE");
	return total;
}