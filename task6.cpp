#include <iostream>
#include <string>
using namespace std;

int main()
{
    string trafficLight;

    cout << "Enter the color of traffic light: ";
    cin >> trafficLight;
    if (trafficLight == "red" || trafficLight == "Red")
    {
        cout << "Stop your vehicle";
    }
    else if (trafficLight == "yellow" || trafficLight == "Yellow")
    {
        cout << "Get ready to move";
    }
    else if (trafficLight == "green" || trafficLight == "Green")
    {
        cout << "You can go";
    }
    else
    {
        cout << "Enter only Red, yellow or green";
    }
    return 0;
}