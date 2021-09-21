#include "Cell.h"

Cell::Cell()
{
	this->north_wall = true;
	this->east_wall = true;
	this->south_wall = true;
	this->west_wall = true;
	this->visited = false;
}

void Cell::set_north_wall_false()
{
	this->north_wall = false;
}
bool Cell::get_north_wall()
{
	return this->north_wall;
}

void Cell::set_east_wall_false()
{
	this->east_wall = false;
}
bool Cell::get_east_wall()
{
	return this->east_wall;
}

void Cell::set_south_wall_false()
{
	this->south_wall = false;
}
bool Cell::get_south_wall()
{
	return this->south_wall;
}

void Cell::set_west_wall_false()
{
	this->west_wall = false;
}
bool Cell::get_west_wall()
{
	return this->west_wall;
}

void Cell::set_visited_true()
{
	this->visited = true;
}

bool Cell::get_visited()
{
	return this->visited;
}

void Cell::set_x_coordinate(int x)
{
	this->x_coordinate = x;
}
int Cell::get_x_coordinate()
{
	return this->x_coordinate;
}

void Cell::set_y_coordinate(int y)
{
	this->y_coordinate = y;
}
int Cell::get_y_coordinate()
{
	return this->y_coordinate;
}
