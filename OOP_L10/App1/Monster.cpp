#include "Monster.h"

Monster::Monster()
{
	this->monster_symbol = 'm';
	this->monster_hit_points = rand() % 20 + 1;
	this->monster_attack_power = rand() % 15 + 1;
}

void Monster::show_monster_information()
{
	cout << "\nHit points: " << this->monster_hit_points << endl;
	cout << "Attack power: " << this->monster_attack_power << endl;
	cout << "X coordinate: " << this->monster_x_coordinate << endl;
	cout << "Y coordinate: " << this->monster_y_coordinate << endl;
}