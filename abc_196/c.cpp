#include <bits/stdc++.h>
using namespace std;


bool allNine(long long num) {
  while(num > 0) {
    if(num % 10 != 9) return false;
    num /= 10;
  }

  return true;
}

int main() {
  long long num; cin >> num;

  long long check = 1;
  long long keta = 1;
  long long ans = 0;
  while(num > check){
    long long temp = check + check * pow(10, keta);
 
    if(num >= temp) {
      ans++;
    } else {
      break;
    }

    if(allNine(check)) {
      check = pow(10, keta);
      keta++;
    } else {
	  check++;
    }
  }

  cout << ans << endl;
  
  return 0;
}