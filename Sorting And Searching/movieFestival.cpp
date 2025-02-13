//sort by second valeu in pair
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b) {

    return a.second < b.second;

}

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);
    for(int i = 0; i < n; i++) {

        cin >> movies[i].first >> movies[i].second;

    }
    sort(movies.begin(), movies.end(), cmp);

    int place = 0;
    int ans = 1;

    for(int i = 1; i < n; i++) {

        if(movies[place].second <= movies[i].first) {

            place = i;
            ans++;

        }

    }
    cout << ans << endl;

}
