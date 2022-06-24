#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n{};
    cin >> n;
    vector<long int> arr;
    long int x{0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    long int count{0};
    long int difference{0};
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            difference = arr[i] - arr[i+1];
            arr[i + 1] = arr[i]; 
            count += difference;
        }
    }
    cout << count << '\n';
}