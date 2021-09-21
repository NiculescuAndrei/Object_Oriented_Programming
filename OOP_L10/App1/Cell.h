#pragma once
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

class Cell
{
public:
	Cell();

	void set_north_wall_false();
	bool get_north_wall();

	void set_east_wall_false();
	bool get_east_wall();

	void set_south_wall_false();
	bool get_south_wall();

	void set_west_wall_false();
	bool get_west_wall();

	void set_visited_true();
	bool get_visited();

	void set_x_coordinate(int x);
	int get_x_coordinate();

	void set_y_coordinate(int y);
	int get_y_coordinate();

private:
	int x_coordinate;
	int y_coordinate;
	bool north_wall;
	bool east_wall;
	bool south_wall;
	bool west_wall;
	bool visited;
};

