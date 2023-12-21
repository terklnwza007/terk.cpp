#include <iostream>
using namespace std;
int main(){
    int n , line;
    cin >> n  >> line;
    int score[n];
    int count[n];
    for(int i=0;i<n; i++){
        score[i] =0;
        count[i] =0;
    }
    
    for(int i =0 ;i<line; i++){
        int no , sc;
        cin >> no >>sc;
        count[no-1] ++; 
        if(sc>score[no-1]){
            score[no-1] = sc;
            
            
        }
        
        
        if(count[no-1] > 5){
            score[no-1] =0;
        }
        
    }
    
    int total=0;
    for(int i=0; i<n; i++){
        
        total += score[i];
    }
    cout << total;
}
