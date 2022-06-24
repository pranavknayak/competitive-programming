#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    int m,n;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> input;
        for(int j = 0; j < m; j++){
            if(input[j] == '.'){
                if((i + j) & 1){
                    input[j] = 'B';
                }
                else{
                    input[j] = 'W';
                }
            }
            else{
                input[j] = '-';
            }
        }
        cout << input << '\n';
    }

}
