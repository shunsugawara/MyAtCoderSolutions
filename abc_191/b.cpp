#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,x; cin >> n >> x;
    vector<long long> nums;

    for(int i = 0; i < n; i++) {
        long long temp; cin >> temp;
        if(temp != x) {
            nums.push_back(temp);
        }
    }

    string ans = "";
    for(int i  = 0; i < nums.size(); i++) {
        ans += to_string(nums.at(i));
        if(i != nums.size() - 1) ans += " ";
    }
    cout << ans << endl;

    return 0;
}
