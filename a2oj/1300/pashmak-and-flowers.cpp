#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll x;
    vector<ll> flowers;
    for(ll i = 0; i < n; i++){
        cin >> x;
        flowers.push_back(x);
    }

    ll min = INT_MAX;
    ll max = 0;
    ll max_count{0}, min_count{0};
    for(ll i = 0; i < n; i++){
        if(max < flowers[i]) max = flowers[i];
        if(min > flowers[i]) min = flowers[i];
    }
    for (ll i = 0; i < n; i++){
        if(max == flowers[i]) max_count++;
        if(min == flowers[i]) min_count++;
    }

    ll ways = (max_count == n) ? n * (n - 1) / 2 : max_count * min_count;
    cout << (max - min) << ' ' << ways << '\n';
    return 0;
}
