#include <iostream>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool status; 

public:
    SmartDevice(string name, string type, bool state)
    {
        deviceName = name;
        deviceType = type;
        status = state;

        cout << deviceName << " (" << deviceType << ") is now alive and ";
        if(status)
            cout << "ON." << endl;
        else
            cout << "OFF." << endl;
    }

    ~SmartDevice()
    {
        cout << deviceName << " is shutting down forever... Goodbye, cruel world!" << endl;
    }

    void showDevice()
    {
        cout << "\nDevice Name: " << deviceName << endl;
        cout << "Type: " << deviceType << endl;
        cout << "Status: " << (status ? "ON" : "OFF") << endl;
    }
};

int main(){
    SmartDevice device1("Alexa Light", "Smart Light", true);
    SmartDevice device2("Roomba X", "Robo Vacuum", false);

    device1.showDevice();
    device2.showDevice();

    SmartDevice* device3 = new SmartDevice("Coffee Boss 3000", "Smart Coffee Maker", true);
    device3->showDevice();

    delete device3; 

    cout << "\nMain ending... Remaining devices will power down automatically.\n";

    return 0;
}

