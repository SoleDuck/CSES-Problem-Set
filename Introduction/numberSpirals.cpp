#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        ll x, y;
        cin >> x >> y;

        if(max(x, y) % 2 == 0) {

            if(x >= y) {

                cout << x * x - y + 1 << endl;

            } else {

                cout << (y - 1) * (y - 1) + x << endl; 

            }

        } else {

            if(y >= x) {

                cout << y * y - x + 1 << endl;

            } else {

                cout << (x - 1) * (x - 1) + y << endl;

            }

        }

    }

}
