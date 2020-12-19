#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w; cin >> h >> w;
    int times = h * w;
    vector<int> nums(times);

    for(int i = 0; i < times; i++) {
        cin >> nums.at(i);
    }
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < times; i++)
    {
        ans += nums.at(i) - nums.at(0);
    }
    
    cout << ans << endl;

    return 0;
}
