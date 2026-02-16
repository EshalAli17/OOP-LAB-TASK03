#include <iostream>
using namespace std;

class CricketPlayer{
private:
    string name;
    int jerseyNumber;
    float battingAverage;
    int totalRuns;
    int matchesPlayed;

public:
    CricketPlayer(string name, int jerseyNumber, float battingAverage)
    {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;

        this->matchesPlayed = 1;
        this->totalRuns = battingAverage;
    }

    CricketPlayer& improveAverage(int runs)
    {
        totalRuns += runs;
        matchesPlayed++;
        battingAverage = (float) totalRuns / matchesPlayed;

        return *this; 
    }

    void playMatch(int runsScored)
    {
        cout << "\n" << name << " is playing a match and scored "
             << runsScored << " runs!" << endl;

        totalRuns += runsScored;
        matchesPlayed++;
        battingAverage = (float) totalRuns / matchesPlayed;
    }

    void displayPlayerStats()
    {
        cout << "\n?? Player: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Batting Average: " << battingAverage << endl;

        cout << "Commentary: This batting average is more consistent than Karachi’s weather!\n";
    }
};

int main(){
    CricketPlayer player1("Babar Azam", 56, 50.0);
    CricketPlayer player2("Muhammad Rizwan", 16, 48.0);
    CricketPlayer player3("Saim Ayub", 63, 35.0);

    player1.improveAverage(120).improveAverage(80);
    player2.improveAverage(95).improveAverage(60);
    player3.improveAverage(150);

    player1.playMatch(110);
    player2.playMatch(75);
    player3.playMatch(5); 

    player1.displayPlayerStats();
    player2.displayPlayerStats();
    player3.displayPlayerStats();

    return 0;
}

