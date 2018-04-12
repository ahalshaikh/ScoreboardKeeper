#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

void printScoreboard(vector < vector <int> >);

int main()
{
        int periods;
        int teams;

        vector< vector<int> > Scoreboard;

        cout<<"How many competitors? ";
        cin>>teams;
        cout<<"How many scoring periods? ";
        cin>>periods;

        if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
                        teams > MAX_TEAMS || periods > MAX_PERIODS )
        {
                cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
                cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
                return 0;
        }
        else
        {
                //make scoreboard and fill it with zeros

                Scoreboard.resize(teams);

                for(int row = 0; row < Scoreboard.size(); row++)
                {
                        Scoreboard[row].resize(periods);

                        for(int col = 0; col < Scoreboard[row].size(); col++)
                        {
                                Scoreboard[row][col] = 0;
                        }
                }


                cout<<"SCOREBOARD"<<endl;
                for(int r = 0; r < Scoreboard.size(); r++)
                {
                        cout<<"Player "<<r + 1<<": ";

                        for(int c = 0; c < Scoreboard[r].size(); c++)
                        {

                                cout<<Scoreboard[r][c]<<"|";

                        }

                        cout<<endl;

                }

                printScoreboard(Scoreboard);


                //once created, display the scoreboard
        }
        return 0;
}

void printScoreboard(vector < vector <int> > board)
{
        cout<<"SCOREBOARD"<<endl;
        //traverse grid and print out each row as a player's score and
        //each column as the score for that scoring period

        for(int r = 0; r < board.size(); r++)
        {
                cout<<"Player "<<r + 1<<": ";

                for(int c = 0; c < board[r].size(); c++)
                {

                        cout<<board[r][c]<<"|";

                }

                cout<<endl;

        }
}
