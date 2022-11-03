//...............Главная функция main()
//...............Файл типа .cpp

#include "pch.h"
#include "EASY_ENEMY.h"
#include "BOSS_ENEMY.h"
#include "MENU.h"

#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n" << "\n";
	cout << "     *************************************************************************************";
	cout << "\n     *	\x1b[33mКурсовая работа на тему:\x1b[0m                                                         *";                                                    
	cout << "\n     *	Разработка объектно-ориентированного приложения 'Компьютерная игра. Противник'   *" << endl;
	cout << "     *************************************************************************************";
	cout << "\n     *	Дисциплина:                                                                      *";
	cout << "\n     *	Практикум по программированию                                                    *" << endl;
	cout << "     *************************************************************************************";
	cout << "\n     *	Выполнила студентка направления ИиВТ (ПОСВТиАС)                                  *";
	cout << "\n     *	\x1b[33mГалачиева Д.В.\x1b[0m                                                                   *" << endl;
	cout << "     *************************************************************************************";
	cout << "\n" << "\n";
	system("PAUSE");
	
	MENU print;
	print.e_Print_MENU();
	print.b_Print_MENU();

	MENU character;
	EASY_ENEMY e_enemy1, e_enemy2, e_enemy3;
	EASY_ENEMY e_total;
	BOSS_ENEMY b_enemy1, b_enemy2, b_enemy3;
	BOSS_ENEMY b_total;

	int enemy_number = 1 + rand() % 5;
	int res1 = 0;

	switch (enemy_number) {
	case 1:
		res1 = character.MENU::e_Character_1(e_enemy1, e_total);
		break;
	case 2:
		res1 = character.MENU::e_Character_2(e_enemy2, e_total);
		break;
	case 3:
		res1 = character.MENU::e_Character_3(e_enemy3, e_total);
		break;
	case 4:
		res1 = character.MENU::b_Character_1(b_enemy1, b_total);
		break;
	case 5:
		res1 = character.MENU::b_Character_2(b_enemy2, b_total);
		break;
	case 6:
		res1 = character.MENU::b_Character_3(b_enemy3, b_total);
		break;
	}

	print.p_Print_MENU();
	
	string answer;
	string head_and_tails[2] = { "орел", "решка" };
	cin >> answer;
	string random = head_and_tails[rand() % 2];
	PLAYER player, p_total;
	int res2 = 0;

	while ((answer != head_and_tails[0]) or (answer != head_and_tails[1])) {
		if ((answer == head_and_tails[0]) or (answer == head_and_tails[1])) {
			if ((answer == random)) {
				cout << "\n	\x1b[32mПоздравляем, вы угадали! \x1b[0m ";
				cout << "\n";
				res2 = character.MENU::s_player_Character(player, p_total);
				break;
			}
			else if ((answer != random)) {
				cout << "\n	\x1b[31mНеудача! К сожалению, вы не угадали... \x1b[0m";
				cout << "\n";
				res2 = character.MENU::un_player_Character(player, p_total);
				break;
			}
		}
		else {
			cout << "\n	\x1b[31mЧто-то не так! Попробуйте ввести ответ еще раз: \x1b[0m";
			cin >> answer;
		}
	}

	system("CLS");
	cout << "\n\n\n			\x1b[33mСравним полученные очки!\x1b[0m" << endl << endl << endl;
	system("PAUSE");
	system("CLS");

	cout << "\n\n	Ваше количество очков: " << res2;
	cout << "\n\n	Количество очков противника: " << res1;

	if (res1 > res2) {
		cout << "\n\n	Похоже, что вы проиграли...\n\n";
	}
	else if (res1 < res2) {
		cout << "\n\n	Вы победили!\n\n";
	}
	else if (res1 == res2) {
		cout << "\n\n	Это ничья!\n\n";
	}
	return 0;
}