#include <iostream>
using namespace std;

class FootballPlayer
{
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer()
    {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(string name, string pos = "Midfielder", int goals = 10)
    {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    FootballPlayer(const FootballPlayer &p)
    {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    void scoreGoals(int goals)
    {
        goalCount += goals;
    }

    void displayProfile()
    {
        cout << "\n? Player: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals: " << goalCount << endl;
        cout << "Commentary: Ballon d'Or loading... Stay tuned! ??" << endl;
    }
};

int main(){
  
    FootballPlayer p1;
    p1.displayProfile();

    FootballPlayer p2("Lionel Messi", "Forward", 820);
    p2.scoreGoals(5);
    p2.displayProfile();

    FootballPlayer p3 = p2;
    p3.scoreGoals(2);
    p3.displayProfile();

    FootballPlayer p4("Kevin De Bruyne");
    p4.scoreGoals(3);
    p4.displayProfile();

    return 0;
}

