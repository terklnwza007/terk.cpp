#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num ;
    cin >> num;
    int  decimal[8];
    for(int i=0;i<8 ; i++){
        decimal[i] ='0';
    }
    for(int i=0;i<8 ; i++){
        decimal[i] = num %2;
        num = num/2; 
    }
    
    swap(decimal[1],decimal[0]);
    for(int i =1; i<=4;i++){
        swap(decimal[i*2],decimal[i*2+1]);
    }
    
    
    
    cout << endl;
    int total =0;
    for(int i=0;i<8;i++){
        if(decimal[7-i]==1){
            total +=  pow(2, 7-i);
        }

    }
    cout << total;
    
    
    

   


    
}