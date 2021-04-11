#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w,x,y; cin >> h >> w >> x >> y;

  vector<vector<char>> mas(h + 2,vector<char>(w + 2));

  for(int i = 1; i <= h; i++) {
    for(int j = 1; j <= w; j++) {
      cin >> mas.at(i).at(j);
    }
  }

  int ans = 1;
  for(int i = x - 1; i > 0; i--) {
    if(mas.at(i).at(y) == '#') break;
    ans++;
  }

  for(int i = x + 1; i <= h; i++) {
    if(mas.at(i).at(y) == '#') break;
    ans++;
  }

  for(int i = y - 1; i > 0; i--) {
    if(mas.at(x).at(i) == '#') break;
    ans++;
  }

  for(int i = y + 1; i <= w; i++) {
    if(mas.at(x).at(i) == '#') break;
    ans++;
  }

  cout << ans << endl;
  
  return 0;
}