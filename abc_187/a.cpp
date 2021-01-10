#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;

    string ans = "No";
    if(a < b) {
        a += 3;
        if(a > b) {
            ans = "Yes";
        }
    } else {
        b += 3;
        if(a < b) {
            ans = "Yes";
        }
    }

    cout << ans << endl;

    return 0;
}
