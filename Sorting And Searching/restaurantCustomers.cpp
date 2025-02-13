//just a sorting problem
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
 
	int n;
	cin >> n;
	
	vector<pair<int, int>> prefix;
	for(int i = 0; i < n; i++) {
 
		int a;
		cin >> a;
		prefix.push_back(make_pair(a, 1));
 
		int b;
		cin >> b;
		prefix.push_back(make_pair(b, -1));
 
	}
	sort(prefix.begin(), prefix.end());
 
	int cur = 0, ans = 0;
	for(int i = 0; i < prefix.size(); i++) {
 
		cur += prefix[i].second;
		ans = max(ans, cur);
 
	}
 
	cout << ans << endl;
 
}
