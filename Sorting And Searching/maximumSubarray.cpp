//keep a prefix sum, on your second loop, keep variable named smallest which tracks smallest sum in the previous
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<ll> prefix(n + 1);
    prefix[0] = 0;
    for(int i = 1; i <= n; i++) {

        ll insert;
        cin >> insert;

        prefix[i] = prefix[i - 1] + insert;

    }

    ll smallest = 0;
    ll ans = INT_MIN;

    for(int i = 1; i <= n; i++) {

        smallest = min(smallest, prefix[i - 1]);
        ans = max(ans, prefix[i] - smallest);

    }
    cout << ans << endl;

}
