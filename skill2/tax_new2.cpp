#include <iostream>
using namespace std;

int main()
{
    int income;

    while (true)
    {
        cin >> income;

        if (income == 0)
        {
            break;
        }
        int tax = 0;

        if (income > 10000000)
        {
            tax += (income - 10000000) * 32 / 100;
            income = 10000000;
        }

        if (income > 5000000)
        {
            tax += (income - 5000000) * 20 / 100;
            income = 5000000;
        }

        if (income > 1000000)
        {
            tax += (income - 1000000) * 12 / 100;
            income = 1000000;
        }

        if (income > 100000)
        {
            tax += (income - 100000) * 6 / 100;
            income = 100000;
        }

        cout << tax << endl;
    }

    return 0;
}