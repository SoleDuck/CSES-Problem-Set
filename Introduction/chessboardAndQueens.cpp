//loop through all the permutatinos
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	vector<string> board(8);
	for(int i = 0; i < 8; i++) {
 
		cin >> board[i];
 
	}
 
	vector<int> queens = {0, 1, 2, 3, 4, 5, 6, 7};
	int ans = 0;
 
	do{
 
		bool works = true;
 
		for(int x = 0; x < 8 && works == true; x++) {
 
			if(board[x][queens[x]] == '*') {
 
				works = false;
				continue;
 
			}
 
			for(int i = 0; i < 7 && works == true; i++) {
 
				for(int j = i + 1; j < 8 && works == true; j++) {
 
					if(j - i == abs(queens[i] - queens[j])) {
 
						works = false;
						continue;
 
					}
 
				}
 
			}
 
		}
 
		if(works == true) {
 
			ans++;
 
		}
 
	}while(next_permutation(queens.begin(), queens.end()));
 
	cout << ans;
 
}
