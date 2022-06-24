#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x{};

    int total = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        total += x;
    }

    int ways = 0;
    for(int i = 1; i <= 5; i++){
        if((total + i) % (n+1) != 1){
            ways++;
        }
    }
    cout << ways << '\n';
    return 0;
}
