#include "Cell.h"
#include "Maze.h"

int main()
{
    cout << "Welcome to the Labyrinth! \nIn order to win you have to keep in mind the following rules:" << endl;
    cout << endl;
    cout << "-> You begin the game in the top left corner of the labyrinth and your mission is to safely arive at the bottom right corner without being killed while you collect as many treasures as you can." << endl;
    cout << "-> In the labyrinth there are 4 possible cells you can run into." << endl;
    cout << "-> If you run into a cell which is marked with B it means that it contains not only a treasure but also a monster that guards it. In order to take the treasure you have to defeat the monster." << endl;
    cout << "-> If you run into a cell which is marked with M it means that there is a monster in there waiting to attack you." << endl;
    cout << "-> If you run into a cell which is marked with T you are lucky that you found a treasure that will count towards your score." << endl;
    cout << "-> If you run into a cell which is unmarked it means it's just a simple cell." << endl;
    cout << "-> You have to keep in mind that you have a health pool equal to 100 and if it drops below 1 (0 or less) you will die and lose the game." << endl;
    cout << "\nGood luck!" << endl;

    int start_game;
    cout << "When you are ready press 1 and the game begins." << endl;
    cin >> start_game;

    if (start_game == 1)
    {
        Maze labirint;
        labirint.generate_maze_randomly();
        labirint.play_game();
    }
    else
    {
        cout << "You pressed the wrong button..." << endl;
    }
    return 0;
    
    
}
