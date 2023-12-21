#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, w, thing;
    vector<int> count1;
    while (true)
    {
        int current_w = 0;
        cin >> n >> w;
        if (n == 0 || w == 0)
            break;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> thing;
            current_w += thing;
            if (current_w > w)
            {
                current_w = thing;

                count++;
            }
            if (i == n - 1)
            {
                count++;
            }
        }
        count1.push_back(count);
    }
    for (auto it : count1) cout << it << endl;
    

    return 0;
}
