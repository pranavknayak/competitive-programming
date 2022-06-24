#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n;
    cin >> n;
    int x{};
    vector<long long int> numbers;
    for(int i = 0; i < n-1; i++)
    {
        cin >> x;
        numbers.push_back(x);
    }
    sort(numbers.begin(), numbers.end());
    long long int j = 1;
    for(long long int k : numbers)
    {
        if(j != k)
        {
            cout << j << '\n';
            return 0;
        }
        j++;
    }
    cout << j << '\n';
    return 0;
}