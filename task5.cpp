#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade: A\n";
    }
    else if (marks >= 75 && marks <= 89)
    {
        cout << "Grade: B\n";
    }
    else if (marks >= 50 && marks <= 74)
    {
        cout << "Grade: C\n";
    }
    else
    {
        cout << "Grade: F\n";
    }

    return 0;
}