#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //pretty similar to repetitions, most of the same idea

    int n;
    cin >> n;

    ll ans = 0;
    ll prev;
    cin >> prev;

    for(int i = 1; i < n; i++) {

        ll cur;
        cin >> cur;

        if(cur < prev) {

            ans += prev - cur;
            cur = prev;

        }
        prev = cur;

    }

    cout << ans << endl;

}
