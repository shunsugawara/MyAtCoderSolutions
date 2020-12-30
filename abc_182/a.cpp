#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d; cin >> a >> b >> c >> d;
    int ans = min(a,min(b,min(c,d)));
    cout << ans << endl;

    return 0;
}
