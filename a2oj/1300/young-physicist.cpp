#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, y, z;
    vector<int> components = {0,0,0};
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        components[0] += x;
        components[1] += y;
        components[2] += z;
    }
    if(components[0] == 0 && components[1] ==  0 && components[2] == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}
