#pragma once
#include <time.h>
#include <iostream>
using namespace std;

class Monster
{
public:
	Monster();
	void show_monster_information();
	friend class Maze;
private:
	char monster_symbol;
	int monster_hit_points;
	int monster_attack_power;
	int monster_x_coordinate;
	int monster_y_coordinate;
};

