#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n,m; cin >> n >> m;

  if(m == 0) {
    cout << "1" << endl;
    return 0;
  }

  vector<long long> nums(m);

  for(long long i = 0; i < m; i++) {
    cin >> nums.at(i);
  }
  sort(nums.begin(), nums.end());

  long long k = 1000000000;
  long long position = 0;
  for(long long i = 0; i <= m; i++) {
    long long temp;
    if(i == m) {
      temp = n + 1;
    }else {
      temp = nums.at(i);
    }
    long long tempK = temp - position - 1;
    if(tempK > 0) {
      k = min(k,tempK);
    }
    position = temp;
  }

  position = 0;
  long long ans = 0;
  for(long long i = 0; i <= m; i++) {
    long long temp;
    if(i == m) {
      temp = n + 1;
    }else {
      temp = nums.at(i);
    }
    long long dis = temp - position - 1;
    ans += dis / k;
    if(dis % k != 0) ans++;
    position = temp;
  }

  cout << ans << endl;

  return 0;
}
