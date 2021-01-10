#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
  int n; cin >> n;
  int num = pow(2, n);
  vector<ll> nums(num);

  for(int i = 0; i < num; i++) {
    cin >> nums.at(i);
  }

  int maeIndex = 0;
  ll maeNum =0;
  for(int i = 0; i < num/2; i++) {
    if(maeNum < nums.at(i)) {
      maeIndex = i;
      maeNum = nums.at(i);
    }
  }
  int atoIndex = 0;
  ll atoNum =0;
  for(int i = num/2; i < num; i++) {
    if(atoNum < nums.at(i)) {
      atoIndex = i;
      atoNum = nums.at(i);
    }
  }

  int ans = maeIndex;
  if(maeNum > atoNum) {
    ans = atoIndex;
  } 
  ans++;
  cout << ans << endl;

  return 0;
}
