#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> watering;
    int tree, n, water;

    cin >> tree >> n >> water;

    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        watering.push_back(make_pair(tmp, tmp + water - 1));
    }
    sort(watering.begin(), watering.end());
    int count_unwater = (watering[0].first - 1) + (tree - watering[watering.size() - 1].second);
    // cout << count_unwater;
    for (int i = 0; i < watering.size(); i++)
    {
        if (i == watering.size() - 1)
            break;
        if (watering[i].second < watering[i + 1].first)
        {
            count_unwater += watering[i + 1].first - watering[i].second - 1;
            // cout << i << " " << count_unwater;
        }
    }
    cout << count_unwater;
}