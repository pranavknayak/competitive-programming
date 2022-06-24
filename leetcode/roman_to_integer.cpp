#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> values = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int val1, val2;
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        val1 = values[s[i]];
        if (i + 1 < s.length())
        {
            val2 = values[s[i + 1]];
            if (val1 >= val2)
            {
                result = result + val1;
            }
            else
            {
                result = result + val2 - val1;
                i++;
            }
        }
        else
        {
            result = result + val1;
        }
    }
    cout << result << '\n';
    return 0;
}