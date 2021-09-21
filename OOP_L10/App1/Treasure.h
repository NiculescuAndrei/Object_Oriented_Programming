#pragma once
#include <time.h>
#include <iostream>
using namespace std;

class Treasure
{
public:
	Treasure();
	void show_treasure_information();
	friend class Maze;
private:
	int treasure_value;
	int treasure_x_coordinate;
	int treasure_y_coordinate;
};

