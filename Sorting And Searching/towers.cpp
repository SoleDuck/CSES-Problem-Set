#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
 
    int n;
    cin >> n;
 
    multiset<int> towers;
    for(int i = 0; i < n; i++) {
 
        int num;
        cin >> num;
 
        if(towers.upper_bound(num) == towers.end()) {
 
            towers.insert(num);
 
        } else {
 
            auto find = towers.upper_bound(num);
            towers.erase(find);
 
            towers.insert(num);
 
        }
 
    }
 
    cout << towers.size() << endl;
 
}
