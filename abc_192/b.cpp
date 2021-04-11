#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  string ans = "Yes";
  for(int i = 0; i < s.size(); i++) {
  	char temp = s.at(i);
    if(i % 2 == 0) {
      if(isupper(temp)) {
        ans = "No";
        break;
      }      
    } else {
      if(islower(temp)) {
        ans = "No";
        break;
      }            
    }
  }
  
  cout << ans << endl;
  
  return 0;
}