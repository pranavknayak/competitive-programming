#include <bits/stdc++.h>

using namespace std;
const int n = 3;
bool chosen[n] = {0};

vector<int> permutation;

void search()
{

    if (permutation.size() == n)
    {
        for(int element: permutation)
        {
            cout << element << " ";
        }
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (chosen[i-1]) continue;
            chosen[i-1] = true;
            permutation.push_back(i);
            search();
            chosen[i-1] = false;
            permutation.pop_back();
        }
    }
}

int main()
{
    search();    
    return 0;
}
