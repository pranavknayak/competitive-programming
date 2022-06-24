
#include <bits/stdc++.h>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
        vector<int> set1;
        vector<int> set2;
        if (n % 4 == 0)
        {
            int i = 0;
            while (4 * i + 4 <= n)
            {
                set1.push_back(4 * i + 1);
                set1.push_back(4 * i + 4);
                set2.push_back(4 * i + 2);
                set2.push_back(4 * i + 3);
                i++;
            }
        }
        else
        {
            int i = 0;
            while (4 * i + 4 <= n)
            {
                set1.push_back(4 * i + 1);
                set1.push_back(4 * i + 4);
                set2.push_back(4 * i + 2);
                set2.push_back(4 * i + 3);
                i++;
            }
            set1.push_back(4 * i + 3);
            set2.push_back(4 * i + 1);
            set2.push_back(4 * i + 2);
            set1.push_back((n - 3) / 2);
            for (vector<int>::iterator j = set2.begin(); j != set2.end(); j++)
            {
                if (*j == ((n - 3) / 2) && (n != 3))
                {
                    set2.erase(j);
                    break;
                }
            }
        }
        sort(set1.begin(), set1.end());
        sort(set2.begin(), set2.end());
        reverse(set1.begin(), set1.end());
        reverse(set2.begin(), set2.end());
        cout << set1.size() << "Sum: " << accumulate(set1.begin(), set1.end(), 0) <<'\n';
        /*for (auto &j : set1)
        {
            cout << j << " ";
        }

        */ cout << '\n'
                << set2.size() << " Sum:" << accumulate(set2.begin(), set2.end(), 0) <<'\n';
        /*for (auto &j : set2)
        {
            cout << j << " ";
        }*/
        cout << '\n';
    }
    return 0;
}
