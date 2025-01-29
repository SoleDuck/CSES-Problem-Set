#include <iostream>
 
int main() {

  //math quesiton, 2x + y = A, x + 2y = B, algebra from here
  
    int t;
    double a, b, x, y;
    std::cin >> t;
    for(int i = 1; i <= t; i++) {
 
        std::cin >> a >> b;
        y = (2 * b - a) / 3;
        x = (2 * a - b) / 3;
 
        long long c = x;
        long long d = y;
        
        if(x < 0 || y < 0) {
 
            std::cout << "NO\n";
 
        }else if(x > c) {
 
            std::cout << "NO\n";
 
        }else if(y > d) {
 
            std::cout << "NO\n";
 
        }else{
 
            std::cout << "YES\n";
 
        }
 
    }
 
}
