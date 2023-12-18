#include <iostream>
using namespace std;
int main()
{

    int homework;
    cin >> homework;

    int exam1, exam2, exam3;
    cin >> exam1 >> exam2 >> exam3;

    int total = homework + exam1 + exam2 + exam3;
    
    

    if (total >= 80)
    {
        cout << "A";
    }
    else if (total >= 75)
    {
        cout << "B+";
    }
    else if (total >= 70)
    {
        cout << "B";
    }
    else if (total >= 65)
    {
        cout << "C+";
    }
    else if (total>= 60)
    {
        cout << "C";
    }
    else if (total >= 55)
    {
        cout << "D+";
    }
    else if (total >= 50)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}