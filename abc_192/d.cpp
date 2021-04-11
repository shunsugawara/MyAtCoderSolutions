// TODO
#include <bits/stdc++.h>
using namespace std;

class Radix {
private:
  const char* s;
  int a[128];
public:
  Radix(const char* s = "0123456789") : s(s) {
    int i;
    for(i = 0; s[i]; ++i)
      a[(int)s[i]] = i;
  }
  unsigned long nToTen(const string& t, int p) {
    int i;
    unsigned long sm = a[(int)t[0]];
    for(i = 1; i < (int)t.length(); ++i) {
      sm = sm * p + a[(int)t[i]];
      if(sm < 0) return -1;

    }

    return sm;
  }
};

int main() {
    string x; cin >> x;
    unsigned long m; cin >> m;

    int sinsuu = 0;
    for(int i = 0;i < x.size(); i++) {
        int temp = x.at(i) - '0';
        if(sinsuu < temp) sinsuu = temp;
    }
    sinsuu++;

    Radix r;
    unsigned long current = 0;
    int ans = 0;
    while(current < m) {
        unsigned long temp = r.nToTen(x, sinsuu);
        if(temp < current) break;
        if(temp <= m) ans++;
        current = temp;
        sinsuu++;
    }
    cout << ans << endl;

    return 0;
}