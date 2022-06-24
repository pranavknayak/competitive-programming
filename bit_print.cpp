#include <bits/stdc++.h>
using namespace std;

void bit_printer(int x)
{
    for (int i = 31; i >= 0; i--)
    {
        if(x & (1 << i)) cout << "1";
        else cout << "0";
    }
    cout << '\n';
}

int main()
{
    int x{};
    while(1)
    {
        cout << "Enter the number: ";
        cin >> x;
        bit_printer(x);
    }
    return 0;
}