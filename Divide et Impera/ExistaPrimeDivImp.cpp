//
//  main.cpp
//  ExistaPrimeDivImp
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

int ExistaPrimeDivImp(int a[], int dr, int st){
    if (st==dr){
        return prim(a[st]);
    }
    
    int mij = (st+dr)/2;
    int s1 = ExistaPrimeDivImp(a, mij, st);
    int s2 = ExistaPrimeDivImp(a, dr, mij+1);
    return s1 || s2;
}

int main(){
    int n; int a[200];
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    if (ExistaPrimeDivImp(a, n-1, 0)) cout << "DA";
    else cout << "NU";
    
    return 0;
}

