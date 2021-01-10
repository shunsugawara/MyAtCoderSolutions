#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> aNums(n);
    vector<int> bNums(n);

    for(int i = 0; i < n; i++) {
        cin >> aNums.at(i);
    }
    for(int i = 0; i < n; i++) {
        cin >> bNums.at(i);
    }
    int sum = 0;    
    for(int i = 0; i < n; i++) {
        sum += aNums.at(i) * bNums.at(i);
    }
    if(sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
