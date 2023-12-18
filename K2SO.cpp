#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool BigSecond(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second || (a.second == b.second && a.first < b.first);
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> block;

    // Input
    for (int i = 0; i < n; i++) {
        int c[2];
        for (int j = 0; j < 2; j++) {
            cin >> c[j];
        }
        block.push_back(make_pair(c[0], c[1]));
    }
    sort(block.begin(), block.end(),BigSecond);

    int shot =0;
    int max_height=0;
    for(int i=0; i<block.size(); i++){
        if(block[i].first>max_height){
            max_height = block[i].second;
            shot++;
        }
    }
    cout << shot;
}
    