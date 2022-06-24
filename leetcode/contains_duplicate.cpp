#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n{};
    int x{};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cout << "true\n";
                return 0;
            }
        }
    }
    cout << "false\n";
    return 0;
}