#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n{};
    cin >> n;
    if(n == 1) cout << "1";
    else if (n <= 3) cout << "NO SOLUTION";
    else if(n == 4) cout << "2 4 1 3 \n";
    else
    {
        for(int i = 1; i <= n; i+=2) cout << i << " ";
        for(int j = 2; j <= n; j+=2) 
        {
            cout << j;
            if(j + 2 <= n)
            {
                cout << " ";
            }
            else cout << endl;
        } 
    }

    return 0;
}