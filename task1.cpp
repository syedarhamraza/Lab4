#include <iostream>
using namespace std;

int main()
{
    float num_1 = 0;
    float num_2 = 0;
    char Operator;

    cout << "Enter Number one: ";
    cin >> num_1;
    cout << "Enter the Operator(+, -, *, /): ";
    cin >> Operator;
    cout << "Enter the Number two: ";
    cin >> num_2;

    if (Operator == '+')
    {
        float add = num_1 + num_2;
        cout << "The Addition is: " << add;
    }
    else if (Operator == '-')
    {
        float subtract = num_1 - num_2;
        cout << "The Subtraction is: " << subtract;
    }
    else if (Operator == '*')
    {
        float multiply = num_1 * num_2;
        cout << "The Multiplication is: " << multiply;
    }
    else if (Operator == '/')
    {
        float divide = num_1 / num_2;
        cout << "The Division is: " << divide;
    }
    else
    {
        cout << "Please Enter a Valid Operator(+, -, *, /)" << endl;
    }

    return 0;
}