//lowkey don't understand this one, but it is with recursion, I need to come back to this one
#include <bits/stdc++.h>
using namespace std;

void swap(int count, int n1, int n3, int n2) {
 
    if(count > 0) {
 
        swap(count - 1, n1, n2, n3);
        cout << n1 << " " << n3 << "\n";
 
        swap(count - 1, n2, n3, n1);
 
    }
 
}

int main() {
 
    int n;
    int g = 0;
    int d = 0;
    cin >> n;
 
    cout << pow(2, n) - 1 << endl;
    swap(n, 1, 3, 2);
    
}
 
