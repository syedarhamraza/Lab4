#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number is positive\n";
    }
    else
    {
        cout << "The number is negetive\n";
    }
    return 0;
}