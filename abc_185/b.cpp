#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,t; cin >> n >> m >> t;
    long tempN = n;
    string ans = "Yes";
    long long prev = 0;
    for(long long i = 0; i < m; i++) {
        long long a,b; cin >> a >> b;

        tempN -= (a-prev);
        if(tempN <= 0) {
            ans = "No";
            break;
        }
    
        tempN += (b - a);
        if(tempN > n) tempN = n;
        prev = b;
    }

    tempN -= (t-prev);
    if(tempN <= 0) ans = "No";

    cout << ans << endl;

    return 0;
}
