//TODO
#include <bits/stdc++.h>
using namespace std;


string binaryStr(int bin){
    int num = 0;
    for (int i = 0; bin>0 ; i++)
    {
        num = num+(bin%2)*pow(10,i);
        bin = bin/2;
    }

    ostringstream sout;
    sout << setfill('0') << setw(16) << num;
    return sout.str();
}

vector<bool> makeFlag(vector<int> ls, vector<int> rs, string flag, int n) {
  vector<bool> flags = vector<bool>(101);
  for(int i = 0; i < n; i++) {
    if(flag.at(15-i) == '1') {
        flags.at(ls.at(i)) = true;
    } else {
        flags.at(rs.at(i)) = true;
    }
  }

  return flags;
}

int main() {
    int n,m; cin >> n >> m;
    vector<int> lefts = vector<int>(m);
    vector<int> rights = vector<int>(m);

    for(int i = 0; i < m; i++) {
        cin >> lefts.at(i) >> rights.at(i);
    }

    int k; cin >> k;
    vector<int> lefts2 = vector<int>(k);
    vector<int> rights2 = vector<int>(k);
    for(int i = 0; i < k; i++) {
        cin >> lefts2.at(i) >> rights2.at(i);
    }

    int ans = 0;
    for(int  i = 0;i < pow(2,k); i++) {
      string s = binaryStr(i);
      vector<bool> flags = makeFlag(lefts2,rights2,s,k);
      int currentAns = 0;
      for(int j = 0; j < m; j++) {
        if(flags.at(lefts.at(j)) && flags.at(rights.at(j))) currentAns++;
      }
      if(ans < currentAns) ans = currentAns;
    }
    cout << ans << endl;

    return 0;
}
