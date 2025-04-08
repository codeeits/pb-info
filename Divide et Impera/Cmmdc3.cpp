//
//  main.cpp
//  Cmmdc3
//
//  Created by Robert Ciobanu on 08.04.2025.
//

#include <iostream>
using namespace std;
int Cmmdc(int a, int b){
    if(b == 0){
        return a;
    }
    return Cmmdc(b, a%b);
}
int Cmmdc3(int v[], int st, int dr){
    
    if(st == dr){
        return v[st];
    }
    if(dr == st+1){
        return Cmmdc(v[st], v[dr]);
    }
    int mij = (st+dr)/2;
    int s1 = Cmmdc3(v, st, mij);
    int s2 = Cmmdc3(v, mij+1, dr);
    
    return Cmmdc(s1, s2);
    
}
void citire(int v[], int n){
    if(n>=1){
        citire(v, n-1);
        cin >> v[n];
    }
}
int main() {
    int x, v[1001];
    cin >> x;
    citire(v, x);
    cout << Cmmdc3(v, 1, x);
    return 0;
}
