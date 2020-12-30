#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> As(n);
  
  for(int i = 0; i < n; i++) {
    cin >> As.at(i);
  }
  
  
  int ans = 2;
  int cnt = 0;
  for(int i = 2; i <= 1000; i++)  {
    int temp = 0;
    for(int j = 0; j < As.size(); j++) {
      if(As.at(j) % i == 0) temp++;
    }
    
    if(temp > cnt) {
      cnt = temp;
      ans = i;
    }
  }
  
  cout << ans << endl;
  
  return 0 ;
}