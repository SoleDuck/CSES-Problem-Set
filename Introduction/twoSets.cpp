#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //just start from biggest number and go down until it goes past half of n * (n + 1) / 2

    ll n;
    cin >> n;

    ll amt = n * (n + 1) / 2;
    
    if(amt % 2 == 1) {

        cout << "NO";

    } else {

        cout << "YES" << endl;

        ll curSum = 0;
        ll curNum = n;
        amt /= 2;
        map<int, bool> works;
        int nums = 0;
        while(curSum < amt) {

            if(curSum + curNum <= amt) {
                works[curNum] = true;
                curSum += curNum;
                curNum--;
                nums++;

            } else {

                curNum--;

            }

        }

        cout << nums << endl;
        for(int i = 1; i <= n; i++) {

            if(works[i] == true) {

                cout << i << " ";

            }

        }
        cout << endl;

        cout << n - nums << endl;
        for(int i = 1; i <= n; i++) {

            if(works[i] == false) {

                cout << i << " ";

            }

        }

    }

}
