#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ll x;
    cin >> x;
    cout << fixed;
    for(ll i = 1; i <= x; i++){
        cout << (ll)((pow(i,2)*(pow(i,2)-1)/2) - 4*(i-1)*(i-2)) << '\n';
    }
    return 0;
}
