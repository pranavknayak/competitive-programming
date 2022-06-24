#include <bits/stdc++.h>
using namespace std;
#define N 4

int main()
{
    vector <int> permutation;
    for (int i = 0; i < N; i++)
    {
        permutation.push_back(i);
    }
    do
    {
        for(int j : permutation)
        {
            cout << j << ' ';
        }
        cout << '\n';
    } while (next_permutation(permutation.begin(), permutation.end()));
    
}