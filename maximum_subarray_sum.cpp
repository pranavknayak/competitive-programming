#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    vector<int> numbers;
    for(int i = 0; i < n; i++){
        cin >> x;
        numbers.push_back(x);
    }

    int sum = 0, best = 0;
    for(int i = 0; i < n; i++){
        sum = max(numbers[i], sum + numbers[i]);
        best = max(sum, best);
    }
    cout << best << '\n';
    return 0;
}
