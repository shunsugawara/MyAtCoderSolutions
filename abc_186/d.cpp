#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n; cin >> n;
  vector<long long> nums(n);

  for (long long i = 0; i < n; i++)
  {
    cin >> nums.at(i);
  }
  
  sort(nums.begin(), nums.end(), greater<long long>());
  long long ans = 0;
  long long times = n - 1;

  for (long long i = 0; i < n / 2; i++)
  {
    ans += (nums.at(i) - nums.at(n-i-1)) * times;
    times -= 2;
  }
  cout << ans << endl;

  return 0;
}
