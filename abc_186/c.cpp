#include <bits/stdc++.h>
using namespace std;

bool hasSeven(int i) {
  while(i > 0) {
    if(i % 10 == 7) {
      return true;
    }
    i /= 10;
  }

  return false;
}

bool isOctWithSeven(int i) {
  stringstream ss;
  ss << oct << i;
  string s = ss.str();
  return s.find("7") != std::string::npos;
}

int main() {
  int n; cin >> n;

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(!(hasSeven(i) || isOctWithSeven(i))) {
      ans++;
    }            
  }

  cout << ans << endl;

  return 0;
}
