//if place of value x is bigger than value of x + 1, then that means you have to loop again, so add 1 ot ans
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> places(n);
    for(int i = 0; i < n; i++) {

        int num;
        cin >> num;
        places[num] = i;

    }

    int ans = 1;

    for(int i = 1; i < n; i++) {

        if(places[i] < places[i + 1]) {

            

        } else {

            ans++;

        }

    }

    cout << ans << endl;

}
