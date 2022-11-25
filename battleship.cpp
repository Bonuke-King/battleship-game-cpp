#include <iostream>
#include <string.h>
using namespace std;


int main () {
//We put "1" to indicate there is a ship.

bool ships [4] [4]=
{
    {0,1,1,0},
    {0,0,0,0},
    {0,0,1,0},
    {0,0,1,0}

};
//Keep trach of how many hits the player has and how many turns they have 
//played in these variables
int hits =0;
int numberOfTurns =0;

//Allow the player to keep going until they have hit all four ships

while (hits <4)
{int row, column;

cout << "Selecting coordinates "<<endl;

//Ask the player for a row
cout << "Choose a row number between 0 and 3:";
cin >> row;

//Ask the player for a column
cout << "Choose a column number between 0 and 3:";
cin  >> column;

//Check if a ship exists in those coordinates
if (ships [row][column])
{
    //if the player hit a ship , remove it by setting the value to zero.
    ships [row] [column] =0;

    //Increase the hit counter
    hits ++;
    //Tell the player that they have hit a ship and how many ships are left 
    cout << "Hit!" << (4 -hits) << left <<endl <<endl;
}
else {
    //tell the player that they missed
    cout << "Miss"<<endl<<endl;
}

//count how many turns the player has taken
numberOfTurns++;


}

cout << "Victory!"<<endl;
cout << "You won in " <<numberOfTurns<< "turns";






return 0;



}



















