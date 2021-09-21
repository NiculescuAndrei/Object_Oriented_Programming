#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
	Player();
	friend class Maze;
private:
	char player_symbol;
	int player_hit_points;
	int player_attack_power;
	int player_x_coordinate;
	int player_y_coordinate;
	int score;
};

