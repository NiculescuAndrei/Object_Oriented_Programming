#include "Treasure.h"

Treasure::Treasure()
{
	this->treasure_value = rand() % 1000 + 1;
}

void Treasure::show_treasure_information()
{
	cout << "\nValue: " << this->treasure_value << endl;
	cout << "X coordinate: " << this->treasure_x_coordinate << endl;
	cout << "Y coordinate: " << this->treasure_y_coordinate << endl;
}