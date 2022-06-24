#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int row, col;
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> x;
            if(x == 1){
                row = i;
                col = j;
            }
        }
    }
    int swaps = abs(2 - row) + abs(2 - col);
    cout << swaps << '\n';
    return 0;
}
