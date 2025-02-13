//use greedy, because every subsum can be made with th evalues, we look at the greatest possible value mnowing that if we subtracted the valu of greatest with any subsum below that works, you can get any number, so only way for it not to work is that the next biggest number is greater than or equal to the current sum
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<ll> nums(n);
    for(int i = 0; i < n; i++) {

        cin >> nums[i];

    }

    ll x = 1;
    sort(nums.begin(), nums.end());
    bool found = false;
    for(int i = 0; i < n; i++) {

        if(nums[i] > x) {

            cout << x;
            found = true;
            break;

        }

        x += nums[i];

    }

    if(found == false) {

        cout << x;

    }

}
