//pretty easy, just use the do{} and next_permutation function
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	string n;
	cin >> n;
 
	int i = 0;
 
	sort(n.begin(), n.end());
 
	do{
 
		i++;
 
	} while (next_permutation(n.begin(), n.end()));
 
	cout << i << endl;
 
	sort(n.begin(), n.end());
 
	do{
 
		cout << n << endl;
 
	} while (next_permutation(n.begin(), n.end()));
 
