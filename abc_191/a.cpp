#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v,t,s,d;
    cin >> v >> t >> s >> d;

    int from = v * t;
    int to = v * s;

    string ans = "No";
    if (d < from || d > to) ans = "Yes";
    cout << ans << endl;

    return 0;
}
