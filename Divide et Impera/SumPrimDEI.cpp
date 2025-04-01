//
//  main.cpp
//  SumPrimDEI
//
//  Created by Robert Ciobanu on 01.04.2025.
//

#include <iostream>
using namespace std;

int prim(int n){
    if (n==2) return 1;
    if (n<2 || n%2==0) return 0;
    for (int i=3; i*i<=n; i+=2){
        if (n%i==0) return 0;
    }
    return 1;
}

int sumPrim(int a[], int st, int dr){
    
    if (st==dr){
        return prim(a[st]) ? a[st] : 0;
    }
    
    int mij = (st+dr)/2;
    int s1 = sumPrim(a, st, mij);
    int s2 = sumPrim(a, mij+1, dr);
    return s1+s2;
    
}
    
int main() {
    int n, a[1000];
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << sumPrim(a, 0, n-1);
    return 0;
}
