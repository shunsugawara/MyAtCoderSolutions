#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  ll num; cin >> num;
  int sum = 0;
  int oneCnt = 0;
  int twoCnt = 0;
  int keta = 0;

  while(num > 0) {
   int temp = num % 10 % 3;
   if(temp == 1) {
     oneCnt++;
   } else if(temp == 2) {
     twoCnt++;
   }  
   sum += temp;
   keta++;
   num /= 10;
  }
  
  int modN = sum % 3;
  int ans = -1;
  if(modN == 0) {
    ans = 0;
  } else if (modN == 1) {
    if(oneCnt > 0 && keta > 1) {
      ans = 1;
    } else if(twoCnt > 1 && keta > 2) {
      ans = 2;
    }
  } else {
    if(twoCnt > 0 && keta > 1) {
      ans = 1;
    } else if(oneCnt > 1 && keta > 2) {
      ans = 2;
    }
  }
  
  cout << ans << endl;

  return 0 ;
}