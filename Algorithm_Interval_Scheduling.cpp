#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval
{
    int start, finish;
};

// Custom sort function
bool compareIntervals(const Interval &a, const Interval &b)
{
    return a.finish < b.finish || (a.finish == b.finish && a.start <= b.start);
}

int main()
{
    int N;
    cin >> N;

    vector<Interval> intervals(N);

    // Input
    for (int i = 0; i < N; ++i)
        cin >> intervals[i].start >> intervals[i].finish;

    sort(intervals.begin(), intervals.end(), compareIntervals);

    int tmp_compare = 0, count = 0;

    for (int i = 0; i < N; ++i)
    {
        if (intervals[i].start >= tmp_compare)
        {
            count++;
            tmp_compare = intervals[i].finish;
        }
    }

    cout << count;

    return 0;
}
