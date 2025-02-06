//find place of number, then find digit, then find digit on the place via string conversion
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll powLL(ll a, ll b) {

    ll res = 1;
    while (b > 0) {

        if (b & 1) {

            res = (res * a);

        }

        a = (a * a);
        b >>= 1;

    }

    return res;
    
}

int main() {

    ll t;
    cin >> t;

    for(ll timer = 0; timer < t; timer++) {

        ll num;
        cin >> num;

        ll i = 1;
        ll power = 9;
        while(num - power * i > 0) {

            num -= power * i;
            power *= 10;
            i++;

        }

        ll digit = num % i;
        ll place = powLL(10, i - 1) + (num) / i;

        string find;

        if(digit == 0) {

            place--;
            find = to_string(place);
            digit = find.size() - 1;

        } else {

            digit--;
            find = to_string(place);
        }

        cout << find[digit] << endl;

    }

}
