//TLE error

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> permutation;
    int n{};
    cin >> n;
    int flag;
    for (int i = 1; i <= n; i++)
    {
        permutation.push_back(i);
    }
    do
    {
        
        for(int i = 0; i < n-1; i++)
        {
            if(abs((permutation[i] - permutation[i+1])) == 1)
            {
                goto end_while;
            }
        }
        for(int number:permutation)
        {
            cout << number << " ";
        }
        flag = 1;
        break;
        end_while:
        flag = 0;
    } while (next_permutation(permutation.begin(), permutation.end()));
    if(flag == 0)
    {
        cout << "NO SOLUTION";
    }
    cout <<'\n';
}