//
//  main.cpp
//  VerifEgaleDivImp
//
//  Created by Robert Ciobanu on 01.04.2025.
//

#include <iostream>
using namespace std;

int verifEg(int a[], int st, int dr){
    if(st == dr) {
        return 1;
    }
    int mij = (st + dr) / 2;
    int s1 = verifEg(a, st, mij);
    int s2 = verifEg(a, mij+1, dr);
    return s1 && s2 && (a[mij] == a[mij+1]);
}
int main() {
    int n, a[500];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (verifEg(a, 0, n-1)) {
        cout << "DA";
    } else {
        cout << "NU";
    }
}
