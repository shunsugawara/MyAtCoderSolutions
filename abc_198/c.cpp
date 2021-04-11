#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll r,x,y; cin >> r >> x >> y;

  double distance = sqrt(pow(x, 2) + pow(y, 2));
  ll times = distance / r;
  if(times == 0) times++;
  
  ll longDistance = floor(distance);
  ll isLong = longDistance == distance;
  ll noMod = longDistance % r == 0;

  if(!(isLong && noMod)) times++;

  cout << times << endl;

  return 0;
}