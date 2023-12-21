#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x=0, y=0;
    string way;
    cin >> way;
    int error;
    cin >> error;
    int count_N=0;
    int count_W=0;
    int count_S=0;
    int count_E=0;
    for(int i =0; i< way.length(); i++){
        if(way[i]=='N'){
            count_N++;
            
        }
        else if(way[i]=='W'){
            count_W++;
        }
        else if(way[i]=='S'){
            count_S++;
        }
        else if(way[i]=='E'){
            count_E++;
        }
    }
    

    for(int i=0;i<error; ++i){
        if((count_N > count_S )&& count_S !=0){
            count_S --;
            
        }else if ((count_S > count_N) && count_N !=0){
            count_N--;
        }
        else if ((count_E > count_W) && count_W !=0){
            count_W--;
        }else if((count_W > count_E) && count_E !=0){
            count_E--;
        }else if((count_N == count_S) && (count_S !=0 && count_S!=0)){
            count_N--;
        }else if((count_E == count_W) && (count_E !=0 && count_W!=0)){
            count_E--;
        }else if(count_N!=0) count_N--;
        else if(count_S!=0) count_S--;
        else if(count_E!=0) count_E--;
        else if(count_W!=0) count_W--;
        


    }

    for(int i =0;i< count_E; i++){
            x++;
        }
        for(int i =0;i< count_W; i++){
            x--;
        }for(int i =0;i< count_S; i++){
            y--;
        }for(int i =0;i< count_N; i++){
            y++;
        }


    cout << (abs(x)+abs(y))*2;
}