#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //total amount is a permutation of available for first one * second one / 2.
    // Difference is the amount of times where it dones't work for two knights
    //Difference is calculated by finding amount of 2x3 (both horizontal and vertical) which have 2 available for each, and since there is horizontal and vertical, it is multiplied by 2 * 2 = 4

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        ll ans = (i * i) * (i * i - 1) / 2;
        ll difference = (i - 1) * (i - 2) * 4;
        cout << ans - difference << endl;

    }

}
