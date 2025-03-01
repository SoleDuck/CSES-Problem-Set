#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int x, n;
	cin >> x >> n;
 
	set<int> lights{0, x};
	multiset<int> distances{x};
 
	for(int i = 0; i < n; i++) {
 
		int insert;
		cin >> insert;
		
		auto forward = lights.upper_bound(insert);
		auto behind = forward;
		behind--;
 
		distances.erase(distances.find(*forward - *behind));
		distances.insert(insert - *behind);
		distances.insert(*forward - insert);
		lights.insert(insert);
 
		auto ans = distances.end();
		ans--;
		cout << *ans << " ";
 
	}
 
}
