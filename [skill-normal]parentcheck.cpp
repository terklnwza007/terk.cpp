#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    string parent[19];
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> parent[i];
    }

    for (int i = 0; i < t; i++) {
        bool check = true;  
        stack<char> s;      
        
        for (char it : parent[i]) {
            if (it == '(' || it == '[' || it == '{') {
                s.push(it);
            } else if (it == ')' || it == ']' || it == '}') {
                if (s.empty() || ((it == ')' && s.top() != '(') || (it == '}' && s.top() != '{') || (it == ']' && s.top() != '['))) {
                    check = false;
                    break;
                }
                s.pop();
            }
        }

        if (check && s.empty()) {
            cout << "yes";
        } else {
            cout << "no";
        }
        cout << endl;
    }

    return 0;
}
