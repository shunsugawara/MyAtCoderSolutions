#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c == 1)
        b--;

    string ans = "Aoki";
    if (a > b)
    {
        ans = "Takahashi";
    }

    cout << ans << endl;

    return 0;
}
