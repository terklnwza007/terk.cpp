#include <iostream>
using namespace std;

int main() {
    int input = 0;
    
    int tax = 0;

    cin >> input;

    if (input > 0 && input <= 50000000) {

        if (input > 10000000) {
            
            tax += (input - 10000000) * 32 / 100;
            input -= input - 10000000;
        }
        if (input > 5000000) {
            
            tax += (input - 5000000) * 20 / 100;
            input -= input - 5000000;
        }
        if (input > 1000000) {
            
            tax += (input - 1000000) * 12 / 100;
            input -= input - 1000000;
        }
        if (input > 100000) {
             
            tax += (input - 100000) * 6 / 100;
            input -= input - 100000;
        }
        if (input > 0) {
            
        }

        cout << tax;
    }

    return 0;
}
