//like the first one, find first, and then only adjacent numbers will be affectd
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> place(n);
    vector<int> x(n);

    for(int i = 0; i < n; i++) {

        cin >> x[i];
        x[i]--;

        place[x[i]] = i;

    }

    int amount = 1;
    for(int i = 0; i < n - 1; i++) {

        amount += place[i] > place[i + 1];

    }

    set<pair<int, int>> swapped;

    for(int i = 0; i < m; i++) {

        int a, b;
        cin >> a >> b;

        a--, b--;

        if(x[a] + 1 < n) {

            swapped.insert({x[a], x[a] + 1});

        }
        if(x[a] - 1 >= 0) {

            swapped.insert({x[a] - 1, x[a]});

        }
        if(x[b] + 1 < n) {

            swapped.insert({x[b], x[b] + 1});

        }
        if(x[b] - 1 >= 0) {

            swapped.insert({x[b] - 1, x[b]});

        }

        for(auto j : swapped) {

            amount -= place[j.first] > place[j.second];

        }

        swap(x[a], x[b]);
        place[x[a]] = a;
        place[x[b]] = b;

        for(auto j : swapped) {

            amount += place[j.first] > place[j.second];

        }

        cout << amount << endl;
        swapped.clear();

    }

}
