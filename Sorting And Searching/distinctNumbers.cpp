//just use a set lil bro
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n;
    cin >> n;

    set<int> ans;
    for(int i = 0; i < n; i++) {

        int insert;
        cin >> insert;
        ans.insert(insert);

    }
    cout << ans.size();

}
