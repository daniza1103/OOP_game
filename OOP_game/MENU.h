//...............Пользовательское меню
//...............Файл типа .h

#include <iostream>
#include <string>

#include "EASY_ENEMY.h"
#include "BOSS_ENEMY.h"
#include "PLAYER.h"

class MENU {

protected:
	EASY_ENEMY e_enemy1, e_enemy2, e_enemy3;
	EASY_ENEMY e_total;

	BOSS_ENEMY b_enemy1, b_enemy2, b_enemy3;
	BOSS_ENEMY b_total;

	PLAYER player, p_total;

public:
	int e_Character_1(EASY_ENEMY e_enemy1, EASY_ENEMY e_total);
	int e_Character_2(EASY_ENEMY e_enemy2, EASY_ENEMY e_total);
	int e_Character_3(EASY_ENEMY e_enemy3, EASY_ENEMY e_total);

	int b_Character_1(BOSS_ENEMY b_enemy1, BOSS_ENEMY b_total);
	int b_Character_2(BOSS_ENEMY b_enemy2, BOSS_ENEMY b_total);
	int b_Character_3(BOSS_ENEMY b_enemy3, BOSS_ENEMY b_total);

	int s_player_Character(PLAYER player, PLAYER p_total);
	int un_player_Character(PLAYER player, PLAYER p_total);

	void e_Print_MENU();
	void b_Print_MENU();
	void p_Print_MENU();
};
