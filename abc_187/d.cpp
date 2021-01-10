#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n,pcost; cin >> n >> pcost;
  map<ll,ll> costs;
  ll last = 0;
  
  for(ll i = 0; i < n; i++) {
    ll a,b,c; cin >> a >> b >> c;    
    costs[a] += c;
    costs[b+1] -= c;      

    if(last < b) {
      last = b;
    }
  }

  ll current = 0;
  ll now = 0;
  ll ans = 0;
  for (auto const& entry: costs) {
    ll distance = entry.first - now;
    if(current > pcost) {
      ans += pcost * distance;
    } else {
      ans += current * distance;
    }
    
    if(entry.first > last) {
      break;
    }
    now = entry.first;
    current += entry.second;
  }
  cout << ans << endl;

  return 0;
}
