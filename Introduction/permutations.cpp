#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //print out all even numbers and then all odd numbers from smallest to biggest.

    int n;
    cin >> n;

    if(n > 3 || n == 1) {

        for(int i = 2; i <= n; i += 2) {

            cout << i << " ";

        }
        
        for(int i = 1; i <= n; i += 2) {

            cout << i << " ";

        }

    } else {

        cout << "NO SOLUTION";

    }

}
