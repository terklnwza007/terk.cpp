#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int tmp =N;
    int Last_Digit = N %10;
    if(N>=10){
        for(;;){
        if(N/10==0){
            break;
        }
        N = N/10;
    }
    }
    if(tmp>=10){
        cout << N << Last_Digit;
    }else{
         cout << Last_Digit;
    }
    
}