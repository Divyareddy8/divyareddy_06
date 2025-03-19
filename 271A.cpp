#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool good(int n){
    unordered_set<int> s;
    while (n > 0) {
        int r = n % 10;
        if (s.find(r) != s.end()) {
            return false;
        }
        s.insert(r);
        n /= 10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(1){
        t++;
        if(good(t)){
            cout << t;
            break;
        }
    }
    return 0;
}