#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> nums;
ll ans(ll cur, ll sum1, ll sum2, ll n) {

    if(cur == n) {

        return abs(sum1 - sum2);

    } else {

        ll yes = ans(cur + 1, sum1 + nums[cur], sum2, n);
        ll no = ans(cur + 1, sum1, sum2 + nums[cur], n);

        return(min(yes, no));

    }

}

int main() {

    ll n;
    cin >> n;

    nums.resize(n);
    for(ll i = 0; i < n; i++) {

        cin >> nums[i];

    }

    ll answer = ans(0, 0, 0, n);
    cout << answer;

}
