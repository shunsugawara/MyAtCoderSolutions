// TODO
#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793


int main() {
  int n;
  double x0,y0,xHalf,yHalf; cin >> n >> x0 >> y0 >> xHalf >> yHalf;

  double centerX = (x0 + xHalf) / 2;
  double centerY = (y0 + yHalf) / 2;

  double foox = x0 - centerX;
  double fooy = y0 - centerY;

  double radian1 = atan2(fooy, foox);
  double r = sqrt(pow(foox, 2) + pow(fooy, 2));


  double degree = 360 / n;
  double radian = degree * PI / 180.0;
  double sinA = sin(radian + radian1);
  double cosA = cos(radian + radian1);

  double ansX = cosA * r + centerX;
  double ansY = sinA * r + centerY;
  cout << setprecision(10) << ansX << " " << ansY << endl;

  return 0;
}
