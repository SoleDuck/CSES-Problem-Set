#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
 
    int n;
    cin >> n;
 
    map<int, int> place;
    int l = 1;
    int ans = 0;
 
    for(int i = 1; i <= n; i++) {
 
        int insert;
        cin >> insert;
        
        if(place[insert] < l) {
 
            place[insert] = i;
 
        } else {
 
            l = place[insert] + 1;
            place[insert] = i;
            
        }
        ans = max(ans, i - l + 1);
 
    }
 
    cout << ans << endl;
 
}
