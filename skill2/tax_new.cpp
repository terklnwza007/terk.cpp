#include <iostream>
using namespace std;

int main()
{
    int input;

    while (true)
    {
        cin >> input;
        if (input == 0)
        {
            break;
        }
        int tax = 0;

        if (input > 10000000)
        {

            tax += (input - 10000000) * 32 / 100;
            input = 10000000;
        }
        if (input > 5000000)
        {

            tax += (input - 5000000) * 20 / 100;
            input = 5000000;
        }
        if (input > 1000000)
        {

            tax += (input - 1000000) * 12 / 100;
            input = 1000000;
        }
        if (input > 100000)
        {

            tax += (input - 100000) * 6 / 100;
            input = 100000;
        }

        cout << tax <<endl;
    }

    return 0;
}