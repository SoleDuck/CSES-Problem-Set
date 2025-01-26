#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //you can use XOR for this because the XOR of two of the same number is 0, so the number remaining after finding the xor of 1 - N and the number sin the array, will be the missing number, because it was only x'ored once

    int n;
    cin >> n;
    
    int ans = n;
    for(int i = 0; i < n - 1; i++) {

        int insert;
        cin >> insert;

        ans ^= (i + 1);
        ans ^= insert;
        
    }

    cout << ans << endl;

}
