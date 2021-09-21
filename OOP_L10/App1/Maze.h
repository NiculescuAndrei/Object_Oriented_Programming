#pragma once
#include "Cell.h"
#include "Monster.h"
#include "Treasure.h"
#include "Player.h"
#define rows 8
#define columns 8

class Maze
{
public:
	Maze();
	void show_maze();
	bool search_monster(int x, int y);
	bool search_treasure(int x, int y);
	int get_monster_position_in_array(int x, int y);
	int get_treasure_position_in_array(int x, int y);
	void generate_maze_randomly();
	void play_game();
private:
	Cell maze[rows][columns];
	vector <Monster> array_of_monsters;
	vector <Treasure> array_of_treasures;
	Player p;
	
};

