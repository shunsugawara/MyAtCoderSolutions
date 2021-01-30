#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,d; cin >> n >> s >> d;

    string ans = "No";
    for(int i = 0; i < n; i++) {
        int x,y; cin >> x >> y;

        if(x < s && d < y) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
