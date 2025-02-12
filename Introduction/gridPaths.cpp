//use recursion (i got a lot of inspiration from Geeks for Geeks answer)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string path;

#define left 0
#define right 1
#define up 2
#define down 3

#define works(a) (a >= 0 && a < 7 ? 1 : 0)

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int visited[7][7];

int solve(int x, int y, int pos) {

    if(pos == 48) {

        return (x == 6 && y == 0);

    }

    if(x == 6 && y == 0) {

        return 0;

    }

    if(visited[x][y]) {

        return 0;

    }

    vector<bool> vis(4, -1);
    for(int i = 0; i < 4; i++) {

        if(works(x + dx[i]) && works(y + dy[i])) {

            vis[i] = visited[x + dx[i]][y + dy[i]];

        }

    }

    if(vis[right] && vis[left] && !vis[up] && !vis[down]) {

        return 0;

    }
    
    if(!vis[right] && !vis[left] && vis[up] && vis[down]) {

        return 0;

    }

    if(works(x + 1) && works(y + 1) && visited[x + 1][y + 1]) {

        if(!vis[down] && !vis[right]) {

            return 0;

        }

    }

    if(works(x + 1) && works(y - 1) && visited[x + 1][y - 1]) {

        if(!vis[down] && !vis[left]) {

            return 0;

        }

    }

    if(works(x - 1) && works(y + 1) && visited[x - 1][y + 1]) {

        if(!vis[up] && !vis[right]) {

            return 0;

        }

    }

    if(works(x - 1) && works(y - 1) && visited[x - 1][y - 1]) {

        if(!vis[up] && !vis[left]) {

            return 0;

        }

    }

    visited[x][y] = true;
    int num = 0;

    if(path[pos] == '?') {

        for(int i = 0; i < 4; i++) {

            if(works(x + dx[i]) && works(y + dy[i])) {

                num += solve(x + dx[i], y + dy[i], pos + 1);

            }

        }

    } else if(path[pos] == 'R' && y + 1 < 7) {

        num += solve(x, y + 1, pos + 1);

    } else if(path[pos] == 'L' && y - 1 >= 0) {

        num += solve(x, y - 1, pos + 1);

    } else if(path[pos] == 'U' && x - 1 >= 0) {

        num += solve(x - 1, y, pos + 1);

    } else if(path[pos] == 'D' && x + 1 < 7) {

        num += solve(x + 1, y, pos + 1);

    }

    visited[x][y] = false;

    return num;

}

int main() {

    cin >> path;
    cout << solve(0, 0, 0);

}
