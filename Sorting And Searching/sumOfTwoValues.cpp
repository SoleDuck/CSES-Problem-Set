//sort and then use two pointer method, keep a pair to track original point
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll n, x;
    cin >> n >> x;

    vector<pair<ll, int>> nums(n);
    for(int i = 0; i < n; i++) {

        cin >> nums[i].first;
        nums[i].second = i;

    }
    sort(nums.begin(), nums.end());

    ll left = 0, right = n - 1;
    bool found = false;
    while(left < right && found == false) {

        if(nums[left].first + nums[right].first < x) {

            left++;

        } else if(nums[left].first + nums[right].first > x) {

            right--;
        
        } else {

            found = true;

        }
        
    }

    if(found == true) {

        cout << nums[left].second + 1 << " " << nums[right].second + 1;

    } else {

        cout << "IMPOSSIBLE";

    }

}
