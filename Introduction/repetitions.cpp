#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //pretty simple, just loop through, if it's the same as the one before it, add to current, if it is not, then ans is the bigger of ans and current in order to find the biggest chain of numbers.

    string dna;
    cin >> dna;

    int ans = 1;
    int cur = 1;
    for(int i = 1; i < dna.size(); i++) {

        if(dna[i] == dna[i - 1]) {

            cur++;

        } else {

            ans = max(ans, cur);
            cur = 1;

        }

    }
    ans = max(ans, cur);
    cout << ans << endl;

}
