//another greedy one, just combine the smallest weight with the biggest possible weight it can be combined with.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n;
    ll x;
    cin >> n >> x;

    vector<ll> weights(n);

    for(int i = 0; i < n; i++) {

        cin >> weights[i];

    }
    sort(weights.begin(), weights.end());

    int right = n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        right--;

        while(right > i) {

            if(weights[i] + weights[right] <= x) {

                ans++;
                break;

            } else {

                right--;
                ans++;

            }

        }

        if(right == i) {

            ans++;
            
        }

    }

    cout << ans << endl;

}
