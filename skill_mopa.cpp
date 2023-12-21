#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n ,m;
    cin >> n >> m;
    vector<int> mopa;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        mopa.push_back(a);
    }
    int count;
    int final;
    int total = 0;
    for(auto it : mopa){
        total+= it;
        
        if(it==mopa[mopa.size()-1]){
            count = it;
            final = total % m;
        }
    }
    vector<int> num;
    
    int x =0;
    for(int i = final ; i >0; i--){
        num.push_back(i);
        x++;
        if(x==count){
            break;
        }
    }
    if(x != count){
        for(int i = m; i>0 ; i--){
            num.push_back(i);
            x++;
            if(x==count){
                break;
            }
        }
    }
    for(int i=num.size()-1; i>=0; i--){
        cout << num[i] << " ";
    }
    
}
