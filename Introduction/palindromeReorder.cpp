#include<bits/stdc++.h>
 
int main() {
 
    int x;
    int y;
    int d;
    int e = 0;
    std::string n;
    std::cin >> n;
    std::vector<char> list;
    std::vector<char> charList {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    std::vector<char> vectorChar;
 
    for(int i = 0; i < n.length(); i++) {
 
        list.push_back(n[i]);
 
    }
 
    for(int i = 0; i < 26; i++) {
        
        x = 0;
 
        for(int a = 0; a < list.size(); a++) {
 
            if(list[a] == charList[i]){
 
                x = x + 1;
 
            }
 
        }
 
        if(x == 1) {
 
            d = i;
            e = e + 1;
 
        }
 
        if(x % 2 == 1 && x != 1) {
 
            y = x / 2;
            for(int b = 1; b <= y; b++) {
 
                vectorChar.push_back(charList[i]);
 
            }
            d = i;
            e = e + 1;
 
        }else if(x % 2 == 0) {
 
            y = x / 2;
            for(int b = 1; b <= y; b++) {
 
                vectorChar.push_back(charList[i]);
 
            }
 
        }
 
    }
 
    if(e >= 2) {
 
        std::cout << "NO SOLUTION";
        return 0;
 
    }
 
    if(list.size() % 2 == 0) {
 
        for(int i = 0; i < vectorChar.size(); i++) {
 
            std::cout << vectorChar[i];
 
        }
        for(int i = vectorChar.size() - 1; i >= 0; i--) {
 
            std::cout << vectorChar[i];
 
        }
 
    }else if(list.size() % 2 == 1) {
 
        for(int i = 0; i < vectorChar.size(); i++) {
 
            std::cout << vectorChar[i];
 
        }
 
        std::cout << charList[d];
 
        for(int i = vectorChar.size() - 1; i >= 0; i--) {
 
            std::cout << vectorChar[i];
 
        }
 
    }
 
}
