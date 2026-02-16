#include <iostream>
using namespace std;

class WeekDays{
private:
    string Days[7];

    int CurrentDay;

public:
    WeekDays()
    {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";

        CurrentDay = 0; 
    }

    WeekDays(int day)
    {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";

        CurrentDay = day % 7;
    }

    string getCurrentDay()
    {
        return Days[CurrentDay];
    }

    string getNextDay()
    {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay()
    {
        return Days[(CurrentDay - 1 + 7) % 7];
    }

    string getNthDayFromToday(int N)
    {
        return Days[(CurrentDay + N) % 7];
    }
};

int main(){
    WeekDays today(1); 

    cout << "Today: " << today.getCurrentDay() << endl;
    cout << "Tomorrow: " << today.getNextDay() << endl;
    cout << "Yesterday: " << today.getPreviousDay() << endl;
    cout << "20 days from today: " << today.getNthDayFromToday(20) << endl;

    return 0;
}

