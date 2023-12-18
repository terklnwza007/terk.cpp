#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string code;
    cin >> code;

    string decimal;
    cin >> decimal;

    int count_code = code.length() / n;
    string c[count_code];

    for (int i = 0; i < code.length(); i++)
    {
        c[i / n] += code[i];
    }

    int skip = 0;
    for (int j = 0; j < count_code - 1 - skip; j++)
    {
        for (int i = j + 1; i < count_code - skip; i++)
        {
            if (c[j] == c[i])
            {
                c[i + 1] = c[i];

                skip++;
                i -= 1;
                for (int j = 0; j < count_code - skip; j++)
                {
                    cout << c[j] << endl;
                }
            }
        }
    }
}