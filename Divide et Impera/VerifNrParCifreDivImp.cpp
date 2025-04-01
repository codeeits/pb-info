//
//  main.cpp
//  VerifNrParCifreDivImp
//
//  Created by Robert Ciobanu on 01.04.2025.
//

#include <iostream>
using namespace std;

int verParitate(int n){
    int c = 0;
    do {
        c++;
        n = n/10;
    }while(n);
    return c%2?0:1; // 1 daca nr de cifre e par, 0 altfel
}
int VerCifParSir(int a[], int st, int dr){
    if (st == dr){
        return verParitate(a[st]);
    }
    int mij = (st+dr)/2;
    int s1 = VerCifParSir(a, st, mij);
    int s2 = VerCifParSir(a, mij+1, dr);
    return s1 && s2;
}
int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << ((VerCifParSir(a, 0, n-1)) ? "DA" : "NU");
}
