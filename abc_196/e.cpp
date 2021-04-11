#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    
    ll minLim = -1000000001;
    ll maxLim = 1000000001;
    ll addNum = 0;
    ll maxAns = 1000000001;
    ll minAns = -1000000001;

    for(int i = 0; i < n; i++) {
        ll a,t; cin >> a >> t;

        if(t == 1){
            addNum += a;
            maxAns += a;
            minAns += a;
        } else if(t == 2) {
            ll tempMinLim = a - addNum;
            if(minLim < tempMinLim) minLim = tempMinLim;
            maxAns = max(maxAns, a);
            minAns = max(minAns, a);
        } else {
            ll tempMaxLim = a - addNum;
            if(maxLim > tempMaxLim) maxLim = tempMaxLim;
            maxAns = min(maxAns, a);
            minAns = min(minAns, a);
        }
    }
  
    ll q; cin >> q;
    for(int i = 0; i < q; i++) {
        ll temp; cin >> temp;
        ll ans = temp + addNum;
        if(temp > maxLim) {
            ans = maxAns;
        } else if(temp < minLim) {
            ans = minAns;
        } 
        cout << ans << endl;
    }

    return 0;
}