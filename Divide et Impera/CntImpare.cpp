//
//  main.cpp
//  CntImpare
//
//  Created by Robert Ciobanu on 01.04.2025.
//

#include <iostream>
using namespace std;

int CntImpare(int a[], int st, int dr){
    if(st==dr){
        return a[st]%2;
    }
    
    int mij = (st+dr)/2;
    int s1 = CntImpare(a, st, mij);
    int s2 = CntImpare(a, mij+1, dr);
    
    return s1+s2;
}

int main() {
    int n, a[1000];
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    cout << CntImpare(a, 0, n-1);
}
