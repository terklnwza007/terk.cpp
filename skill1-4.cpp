#include <iostream>

using namespace std;
bool checkprime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int closePrime(int num) {
    int lek = num - 1;
    int yai = num + 1;

    while (true) {
        if (checkprime(lek)) {
            return lek;
        } else if (checkprime(yai)) {
            return yai;
        }
        lek--;
        yai++;
    }
}

int main() {
    int input;
    
    cin >> input;
    int result;
    int closestPrime = closePrime(input);
    if(checkprime(input)==true){
        result =0;
    }else{
        if(closestPrime > input){
            result = closestPrime - input;
        }else{
            result = input - closestPrime;
        }
    }
     
    cout << result << endl;

    return 0;
}