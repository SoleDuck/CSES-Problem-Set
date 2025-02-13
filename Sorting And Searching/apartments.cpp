//can be solved using a greedy algorihtm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> people(n), apartment(m);

    for(int i = 0; i < n; i++) {

        cin >> people[i];

    }

    for(int i = 0; i < m; i++) {

        cin >> apartment[i];

    }

    sort(people.begin(), people.end());
    sort(apartment.begin(), apartment.end());

    int num = -1;
    int ans = 0;

    for(int i = 0; i < m; i++) {

        while(num + 1 < n) {

            if(people[num + 1] >= apartment[i] - k && people[num + 1] <= apartment[i] + k) {

                ans++;
                num++;
                break;

            } else {

                if(people[num + 1] > apartment[i] + k) {

                    break;

                } else {

                    num++;

                }

            }

        }


    }

    cout << ans << endl;

}
