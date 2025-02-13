//shortest deviation of all is the median
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
 
	ll n;
	cin >> n;
	vector<ll> sticks(n);
 
	for(int i = 0; i < n; i++) {
 
		cin >> sticks[i];
 
	}
 
	sort(sticks.begin(), sticks.end());
	ll mid = sticks[n / 2];
 
	ll ans = 0;
	for(int i = 0; i < n; i++) {
 
		ans += abs(mid - sticks[i]);
 
	}
 
	cout << ans;
 
}
