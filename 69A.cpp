#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int  sumx = 0, sumy = 0, sumz = 0;
    while(t--){
        int x,y,z;
       cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}