#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, tmp = 0;

    
    cin >> n;

    

    for (int i = 1; i <= n+2; ++i) {
        
        if(i == 1) {
            
            continue;
        }
        if(i == 2) {
            
            continue;
        }
        tmp = t1 + t2;
        t1 = t2;
        t2 = tmp;
        
        
    }
    cout << tmp ;
    return 0;
}