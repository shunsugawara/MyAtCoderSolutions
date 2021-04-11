#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  
  string ans = "";
  for(char c: s) {
      if(c == '.'){
        break;
      } else {
        ans += c;
      }
  }

  cout << ans << endl;
  
  return 0;
}