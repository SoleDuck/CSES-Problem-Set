//use a multiset to search, should be like m * logn
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;

    for(int i = 0; i < n; i++) {

        int insert;
        cin >> insert;

        tickets.insert(insert);

    }

    for(int i = 0; i < m; i++) {

        int num;
        cin >> num;

        auto find = tickets.upper_bound(num);
        if(find != tickets.begin()) {

            find--;
            cout << *find << endl;
            tickets.erase(find);

        } else {

            cout << -1 << endl;

        }

    }

}
