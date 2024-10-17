#include <iostream>
using namespace std;

int main()
{
    int age = 0;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote";
    }
    else
    {
        cout << "You cannot vote";
    }
    return 0;
}