#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    
    int result;
    cin >> result;
    for (int i = 0; i < n-1; ++i) {
        int num;
        char op;

        
        cin >> op >> num;
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        }
    }

    
    cout << result ;

    return 0;
}
