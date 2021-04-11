// TODO
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(double r,double x, double y,double x1, double y1) {
  return (x - x1) * (x - x1) + (y - y1) * (y - y1) <= r * r;
}

int main() {
    double x,y,r; cin >> x >> y >> r;

    double lx = ceil(x - r) - 1;
    double rx = ceil(x + r);
    double uy = ceil(y + r);
    double dy = ceil(y - r) - 1;
  
    long long ans = 0;
    ans += (abs(rx - lx) + 1) * (abs(uy - dy) + 1);

    for(double j = dy; j <= uy; j += 1) { 
        for(double i = lx; i <= x; i += 1) {
          if(!check(r,x,y,i,j)) {
            ans--;
          } else {
            break;
          }
        }
    }

    for(double j = dy; j <= uy; j += 1) { 
        for(double i = rx; i > x; i -= 1) {
          if(!check(r,x,y,i,j)) {
            ans--;
          } else {
            break;
          }
        }
    }


  cout << ans << endl;

  return 0;
}
