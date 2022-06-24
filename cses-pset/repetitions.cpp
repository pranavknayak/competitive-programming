#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    cin >> dna;

    int count{1};
    int answer{1};
    for(int i = 0; i < dna.length() - 1; i++)
    {
        if(dna[i] == dna[i+1])
        {
            count++;
        }
        else
        {
            count  = 1;
        }
        answer = max(answer, count);
    }

    cout << answer << '\n';
    
    return 0;
}