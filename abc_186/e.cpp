//TODO:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n,s,k; cin >> n >> s >> k;

        long long pos = s;
        long long cnt = 1;
        while(true) {
            long long foo = pos + k;
            if(foo % n == 0) {
                cout << cnt << endl;
            } else if(pos == s && cnt != 1) {
                cout << "-1" << endl;
            }

            cnt++;
            pos = foo % n;
        }

    }

    return 0;
}
