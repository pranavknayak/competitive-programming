#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n;
    cin >> n;
    vector<int> a;
    ll b[n];
    ll x;
    for(ll i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
        b[x] = i + 1;
    }
    ll m;
    cin >> m;
    ll petya{}, vasya{};
    for(ll i = 0; i < m; i++){
        cin >> x;
        vasya += b[x];
        petya += n - b[x] + 1;
    }
    cout << vasya << " " << petya << '\n';
    return 0;
}
