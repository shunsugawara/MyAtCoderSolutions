#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;

  long long zeroCnt = 0;
  for(int i = s.size() - 1; i >= 0; i--)  {
    if(s.at(i) == '0') {
        zeroCnt++;
    } else {
        break;
    }
  }

  for(int i = 0; i < zeroCnt; i++)  {
    s = "0" + s;
  }
  string check = s;
  reverse(s.begin(), s.end());
  
  if(check == s) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}