#include "Maze.h"

Maze::Maze()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			maze[i][j].set_x_coordinate(i);
			maze[i][j].set_y_coordinate(j);
		}
	}
}

bool Maze::search_monster(int x, int y)
{
	bool check_existence_of_monster = false;
	for (int i = 0; i < array_of_monsters.size(); i++)
	{
		if (array_of_monsters[i].monster_x_coordinate == x && array_of_monsters[i].monster_y_coordinate == y)
		{
			check_existence_of_monster = true;
			break;
		}
	}
	return check_existence_of_monster;
}

bool Maze::search_treasure(int x, int y)
{
	bool check_existence_of_treasure = false;
	for (int i = 0; i < array_of_treasures.size(); i++)
	{
		if (array_of_treasures[i].treasure_x_coordinate == x && array_of_treasures[i].treasure_y_coordinate == y)
		{
			check_existence_of_treasure = true;
			break;
		}
	}
	return check_existence_of_treasure;
}

int Maze::get_monster_position_in_array(int x, int y)
{
	int count_monster_position = 0;
	for (int i = 0; i < array_of_monsters.size(); i++)
	{
		if (array_of_monsters[i].monster_x_coordinate == x && array_of_monsters[i].monster_y_coordinate == y)
		{
			return count_monster_position;
		}
		else
		{
			count_monster_position++;
		}
	}
}

int Maze::get_treasure_position_in_array(int x, int y)
{
	int count_treasure_position = 0;
	for (int i = 0; i < array_of_treasures.size(); i++)
	{
		if (array_of_treasures[i].treasure_x_coordinate == x && array_of_treasures[i].treasure_y_coordinate == y)
		{
			return count_treasure_position;
		}
		else
		{
			count_treasure_position++;
		}
	}
}

void Maze::show_maze()
{
	for (int i = 0; i < columns; i++)
	{
		if (maze[0][i].get_north_wall() == 1)
		{
			cout << " -";
		}
		else
		{
			cout << "  ";
		}
	}
	cout << endl;

	for (int i = 0; i < rows; i++)
	{
		cout << "|";
		for (int j = 0; j < columns; j++)
		{

			if (p.player_x_coordinate == i && p.player_y_coordinate == j)
			{
				cout << p.player_symbol;
			}
			else if (search_monster(i, j) == true && search_treasure(i, j) == true)
			{
				cout << 'B';
			}
			else if (search_monster(i, j) == true)
			{
				cout << 'M';
			}
			else if (search_treasure(i, j) == true)
			{
				cout << 'T';
			}
			else
			{
				cout << " ";
			}

			if (maze[i][j].get_east_wall() == 1)
			{
				cout << "|";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
		for (int k = 0; k < columns; k++)
		{
			if (maze[i][k].get_south_wall() == 1)
			{
				cout << " -";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

void Maze::generate_maze_randomly()
{
	srand(time(NULL));
	
	cout << "Monsters: " << endl;

	// Random monsters generation
	for (int i = 0; i < (rows * columns) / 4; i++)
	{
		bool check_monster = false;

		array_of_monsters.push_back(Monster());
		array_of_monsters[i].monster_x_coordinate = rand() % rows;
		array_of_monsters[i].monster_y_coordinate = rand() % columns;

		// While loop in which it randomizes the coordinates of the monster (if it has the same ones with a monster created before).
		while (check_monster != true)
		{
			int count_monster = 0;
			for (int j = 0; j < array_of_monsters.size(); j++)
			{
				// Condition to avoid checking the monster itself.
				if (i != j)
				{
					if (array_of_monsters[j].monster_x_coordinate == array_of_monsters[i].monster_x_coordinate &&
						array_of_monsters[j].monster_y_coordinate == array_of_monsters[i].monster_y_coordinate)
					{
						count_monster++;
					}
				}
			}
			// There is no monster with same coordinates as the last one generated.
			if (count_monster == 0)
			{
				check_monster = true;
			}
			// We found a monster with same coordinates as the last one generated and we randomize his coordinates again.
			else
			{
				array_of_monsters[i].monster_x_coordinate = rand() % rows;
				array_of_monsters[i].monster_y_coordinate = rand() % columns;
			}
		}
	}

	cout << endl;
	cout << "Treasures: " << endl;

	// Random treasures generation
	for (int i = 0; i < (rows * columns) / 4; i++)
	{
		bool check_treasure = false;

		array_of_treasures.push_back(Treasure());
		array_of_treasures[i].treasure_x_coordinate = rand() % rows;
		array_of_treasures[i].treasure_y_coordinate = rand() % columns;

		// While loop in which it randomizes the coordinates of the treasure (if it has the same ones with a treasure created before).
		while (check_treasure != true)
		{
			int count_treasure = 0;
			for (int j = 0; j < array_of_treasures.size(); j++)
			{
				// Condition to avoid checking the treasure itself.
				if (i != j)
				{
					if (array_of_treasures[j].treasure_x_coordinate == array_of_treasures[i].treasure_x_coordinate &&
						array_of_treasures[j].treasure_y_coordinate == array_of_treasures[i].treasure_y_coordinate)
					{
						count_treasure++;
					}
				}
			}
			// There is no treasure with same coordinates as the last one generated.
			if (count_treasure == 0)
			{
				check_treasure = true;
			}
			// We found a treasure with same coordinates as the last one generated and we randomize his coordinates again.
			else
			{
				array_of_treasures[i].treasure_x_coordinate = rand() % rows;
				array_of_treasures[i].treasure_y_coordinate = rand() % columns;
			}
		}
	}

	// Iterative DFS algorithm.
	stack <Cell> s;
	maze[0][0].set_north_wall_false();
	maze[0][0].set_visited_true();
	s.push(maze[0][0]);


	while (!s.empty())
	{
		Cell current_cell = s.top();
		s.pop();

		// For the current cell extracted from stack we take all his unvisited neighbours and put them in a vector. After that we randomly select one of them.
		// By doing this we will obtain a random maze every time we run the program.
		vector <Cell> unvisited_neighbours;
		int number_of_unvisted_neighbours = 0;

		//north neighbour cell
		if (maze[current_cell.get_x_coordinate() - 1][current_cell.get_y_coordinate()].get_visited() == false && current_cell.get_x_coordinate() - 1 >= 0)
		{
			unvisited_neighbours.push_back(maze[current_cell.get_x_coordinate() - 1][current_cell.get_y_coordinate()]);
			number_of_unvisted_neighbours++;
		}

		//east neighbour cell
		if (maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate() + 1].get_visited() == false && current_cell.get_y_coordinate() + 1 < columns)
		{
			unvisited_neighbours.push_back(maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate() + 1]);
			number_of_unvisted_neighbours++;
		}

		//south neighbour cell
		if (maze[current_cell.get_x_coordinate() + 1][current_cell.get_y_coordinate()].get_visited() == false && current_cell.get_x_coordinate() + 1 < rows)
		{
			unvisited_neighbours.push_back(maze[current_cell.get_x_coordinate() + 1][current_cell.get_y_coordinate()]);\
			number_of_unvisted_neighbours++;
		}

		//west neighbour cell
		if (maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate() - 1].get_visited() == false && current_cell.get_y_coordinate() - 1 >= 0)
		{
			unvisited_neighbours.push_back(maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate() - 1]);
			number_of_unvisted_neighbours++;
		}

		if (number_of_unvisted_neighbours != 0)
		{
			int random_unvisited_neighbour = rand() % number_of_unvisted_neighbours;

			//check if the randomly selected neighbour is in north
			if ((current_cell.get_y_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()) && 
				(current_cell.get_x_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate() + 1)) 
			{
				maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate()].set_north_wall_false();
				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_south_wall_false();

				s.push(current_cell);
				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_visited_true();
				s.push(unvisited_neighbours[random_unvisited_neighbour]);
			}

			//check if the randomly selected neighbour is in south
			if ((current_cell.get_y_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()) && 
				(current_cell.get_x_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()-1)) 
			{
				maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate()].set_south_wall_false();
				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_north_wall_false();

				s.push(current_cell);

				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_visited_true();
				s.push(unvisited_neighbours[random_unvisited_neighbour]);
			}

			//check if the randomly selected neighbour is in east
			if ((current_cell.get_y_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate() - 1) &&
				(current_cell.get_x_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()))
			{
				maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate()].set_east_wall_false();
				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_west_wall_false();

				s.push(current_cell);

				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_visited_true();
				s.push(unvisited_neighbours[random_unvisited_neighbour]);
			}

			//check if the randomly selected neighbour is in west
			if ((current_cell.get_y_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate() + 1) && 
				(current_cell.get_x_coordinate() == unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate())) 
			{
				maze[current_cell.get_x_coordinate()][current_cell.get_y_coordinate()].set_west_wall_false();
				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_east_wall_false();

				s.push(current_cell);

				maze[unvisited_neighbours[random_unvisited_neighbour].get_x_coordinate()][unvisited_neighbours[random_unvisited_neighbour].get_y_coordinate()].set_visited_true();
				s.push(unvisited_neighbours[random_unvisited_neighbour]);
			}

		}
		show_maze();
		cout << "Generating maze..." << endl;
		system("CLS");

	}

	// Exit of the maze.
	maze[rows - 1][columns - 1].set_south_wall_false();
	show_maze();			

}

void Maze::play_game()
{
	bool end_game = false;

	while (end_game != true)
	{
		// Check if there is a monster and a treasure at the player's position
		if (search_monster(p.player_x_coordinate, p.player_y_coordinate) == true && search_treasure(p.player_x_coordinate, p.player_y_coordinate) == true)
		{
			cout << "You arrived in a cell with a monster and a treasure" << endl;

			// Get the correct monster and treasure according to the given position of the player.
			int monster_position_in_array = get_monster_position_in_array(p.player_x_coordinate, p.player_y_coordinate);
			int treasure_position_in_array = get_treasure_position_in_array(p.player_x_coordinate, p.player_y_coordinate);

			array_of_monsters[monster_position_in_array].show_monster_information();
			array_of_treasures[treasure_position_in_array].show_treasure_information();

			// 1 - the player attacks first or 2 - the monster attacks first.
			int attack_turn = rand() % 2 + 1;

			// The player fights with the monster as long as they both have at least 1 hp.
			while (p.player_hit_points > 0 && array_of_monsters[monster_position_in_array].monster_hit_points > 0)
			{
				if (attack_turn % 2 != 0)
				{
					cout << "\nYou hit the monster for " << p.player_attack_power << " damage" << endl;

					array_of_monsters[monster_position_in_array].monster_hit_points -= p.player_attack_power;

					if (array_of_monsters[monster_position_in_array].monster_hit_points <= 0)
					{
						cout << "\nYou have slain the monster and you have collected the treasure with value of " << array_of_treasures[treasure_position_in_array].treasure_value << endl;
						p.score += array_of_treasures[treasure_position_in_array].treasure_value;
					}
					else
					{
						cout << "The monster has " << array_of_monsters[monster_position_in_array].monster_hit_points << " remaining hit points" << endl;
					}
				}
				else
				{
					cout << "\nThe monster hit you for " << array_of_monsters[monster_position_in_array].monster_attack_power << " damage" << endl;

					p.player_hit_points -= array_of_monsters[monster_position_in_array].monster_attack_power;

					if (p.player_hit_points <= 0)
					{
						cout << "You have been slain!" << " Your score was " << p.score << "! Better luck next time..." << endl;
						end_game = true;
					}
					else
					{
						cout << "You have " << p.player_hit_points << " remaining hit points" << endl;
					}
				}

				attack_turn++;
			}

			// If the player is still alive it means he defeated the monster and he collected the treasure, so we can remove the monster and treasure from that room from the game.
			if (p.player_hit_points > 0)
			{
				array_of_monsters.erase(array_of_monsters.begin() + monster_position_in_array);
				array_of_treasures.erase(array_of_treasures.begin() + treasure_position_in_array);
			}
		}
		// Check if there is a monster at the player's position
		else if (search_monster(p.player_x_coordinate, p.player_y_coordinate) == true)
		{
			cout << "You arrived in a cell with a monster!" << endl;

			// Get the correct monster according to the player's position
			int monster_position_in_array = get_monster_position_in_array(p.player_x_coordinate, p.player_y_coordinate);

			array_of_monsters[monster_position_in_array].show_monster_information();

			// 1 - the player attacks first or 2 - the monster attacks first.
			int attack_turn = rand() % 2 + 1;

			// The player fights with the monster as long as they both have at least 1 hp.
			while (p.player_hit_points > 0 && array_of_monsters[monster_position_in_array].monster_hit_points > 0)
			{
				if (attack_turn % 2 != 0)
				{
					cout << "\nYou hit the monster for " << p.player_attack_power << " damage" << endl;

					array_of_monsters[monster_position_in_array].monster_hit_points -= p.player_attack_power;

					if (array_of_monsters[monster_position_in_array].monster_hit_points <= 0)
					{
						cout << "You have slain the monster!" << endl;
					}
					else
					{
						cout << "The monster has " << array_of_monsters[monster_position_in_array].monster_hit_points << " remaining hit points" << endl;
					}
				}
				else
				{
					cout << "\nThe monster hit you for " << array_of_monsters[monster_position_in_array].monster_attack_power << " damage" << endl;

					p.player_hit_points -= array_of_monsters[monster_position_in_array].monster_attack_power;

					if (p.player_hit_points <= 0)
					{
						cout << "You have been slain! Better luck next time..." << endl;
						end_game = true;
					}
					else
					{
						cout << "You have " << p.player_hit_points << " remaining hit points" << endl;
					}
				}

				attack_turn++;
			}

			// If the player is still alive it means he defeated the monster and we can remove the monster from that room from the game.
			if (p.player_hit_points > 0)
			{
				array_of_monsters.erase(array_of_monsters.begin() + monster_position_in_array);
			}
		}
		// Check if there is a treasure at the player's position
		else if (search_treasure(p.player_x_coordinate, p.player_y_coordinate) == true)
		{
			cout << "You arrived in a cell with a treasure" << endl;

			// Get the correct treasure according to the player's position
			int treasure_position_in_array = get_treasure_position_in_array(p.player_x_coordinate, p.player_y_coordinate);

			array_of_treasures[treasure_position_in_array].show_treasure_information();

			cout << "\nYou have collected a treasure worth of " << array_of_treasures[treasure_position_in_array].treasure_value << endl;
			p.score += array_of_treasures[treasure_position_in_array].treasure_value;
			// The player collected the treasure and we can remove it from the game.
			array_of_treasures.erase(array_of_treasures.begin() + treasure_position_in_array);
		}

		if (end_game != true)
		{
			char move_option;
			cout << "Enter the direction (W/A/S/D): " << endl;
			cin >> move_option;
			switch (move_option)
			{
			case 'W':
				if (p.player_x_coordinate == 0 && p.player_y_coordinate == 0)
				{
					cout << "You can't go there because that is where you entered the maze! Go find the exit!" << endl;
				}
				else if (maze[p.player_x_coordinate][p.player_y_coordinate].get_north_wall() == true)
				{
					cout << "There is a wall that blocks the path. You can't go north!" << endl;
				}
				else if (maze[p.player_x_coordinate][p.player_y_coordinate].get_north_wall() == false)
				{
					p.player_x_coordinate--;
				}
				break;
			case 'A':
				if (maze[p.player_x_coordinate][p.player_y_coordinate].get_west_wall() == true)
				{
					cout << "There is a wall that blocks the path. You can't go west!" << endl;
				}
				else if (maze[p.player_x_coordinate][p.player_y_coordinate].get_west_wall() == false)
				{
					p.player_y_coordinate--;
				}
				break;
			case 'S':
				if (p.player_x_coordinate == rows - 1 && p.player_y_coordinate == columns - 1)
				{
					cout << "You safely escaped the maze and you won with a score of "<<p.score<< ". Congratulations!" << endl;
					end_game = true;
				}
				else if (maze[p.player_x_coordinate][p.player_y_coordinate].get_south_wall() == true)
				{
					cout << "There is a wall that blocks the path. You can't go south!" << endl;
				}
				else if (maze[p.player_x_coordinate][p.player_y_coordinate].get_south_wall() == false)
				{
					p.player_x_coordinate++;
				}
				break;
			case 'D':
				if (maze[p.player_x_coordinate][p.player_y_coordinate].get_east_wall() == true)
				{
					cout << "There is a wall that blocks the path. You can't go east!" << endl;
				}
				else if (maze[p.player_x_coordinate][p.player_y_coordinate].get_east_wall() == false)
				{
					p.player_y_coordinate++;
				}
				break;
			default:
				cout << "Your option is invalid. You have to choose one of the W/A/S/D" << endl;
				break;
			}
		}
		show_maze();
	}

}