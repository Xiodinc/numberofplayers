
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
int teamSize;
int playersOnTeam;
int morePlayersNeeded;
int extraPlayers;

//Input team size
cout << "How many players should be on the team? ";
cin >> teamSize;
if (cin.fail()) // check for non numerical input
{
    cout << "Illegal entry for team size" << endl;
    return 1; //exit program, return error code 1
    }
if (teamSize < 1) //check for negative number input
{
    cout << "Negative values are not allowed" << endl;
    return 1; //exit program
    }
//input number of players on team
cout << "How many players are on the team?";
cin >> playersOnTeam;
if (cin.fail())
{
    cout << "Illegal entry for players on the team" << endl;
    return 1; //exit program, return error code 1
    }
if (playersOnTeam < 1) //check for negative number input
{
    cout << "Negative values are not allowed" << endl;
    return 1; //exit program
    }

//process and output, check for correct number of players
if (playersOnTeam < teamSize)
{
    cout << "There are not enough players" << endl;

morePlayersNeeded = teamSize - playersOnTeam;
cout << morePlayersNeeded << " more players are needed" << endl;
    }
else if (playersOnTeam > teamSize)
{
    cout << "There are too many players" << endl;
    extraPlayers = playersOnTeam - teamSize;
    cout << extraPlayers << " players need to be eliminated" << endl;
    }
else
{
cout << "You have the correct number of players" <<endl << endl;
    }
    return 0; //exit program with error code 0
}
