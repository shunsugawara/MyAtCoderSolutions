#include <bits/stdc++.h>
using namespace std;

long long foo(long long num) {
  if(num == 0) return 0;
  vector<long long> nums;

  while(num > 0) {
   nums.push_back(num%10);
   num /= 10;
  }
  sort(nums.begin(), nums.end());

  long long g1 = 0;
  for(int i = 0; i < nums.size(); i++) {
   g1 *= 10;
   g1 += nums.at(nums.size() - 1 -i);
  }
  
  long long g2 = 0;
  for(int i = 0; i < nums.size(); i++) {
   g2 *= 10;
   g2 += nums.at(i);
  }
  
  return g1 - g2;  
}


int main() {
  long long n,k; cin >> n >> k;
  
  long long current = n;
  for(int i = 0; i < k; i++) {
   current = foo(current); 
  }
  cout << current << endl;
  
  return 0;
}