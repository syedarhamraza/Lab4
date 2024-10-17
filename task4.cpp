#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is greater" << endl;
    }
    else
    {
        cout << num2 << " is greater" << endl;
    }
    return 0;
}
