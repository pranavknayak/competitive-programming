#include <bits/stdc++.h>
using namespace std;

int main(){
    string s{};
    cin >> s;
    vector<int> letter_count(26, 0);
    for(int i = 0; i < s.length(); i++){
        letter_count[s[i] - 'a']++;
    }
    int odd_count = 0;
    for(int i = 0; i < letter_count.size(); i++){
        if(letter_count[i] % 2 != 0) odd_count++;
    }
    if(odd_count == 0 || odd_count % 2 == 1){
        cout <<"First\n";
    }
    else{
        cout << "Second\n";
    }
    return 0;
}
