//
//  main.cpp
//  InaltimiQ
//
//  Created by Robert Ciobanu on 15.04.2025.
//

#include <iostream>

using namespace std;

int a[100001], o[100001];

void interclasare(int st, int dr, int mij) {
    int v[100001], k = 0;
    int i = st, j = mij + 1;
    while (i <= mij && j <= dr) {
        if (a[o[i]] < a[o[j]]) {
            v[++k] = o[i++];
        } else {
            v[++k] = o[j++];
        }
    }
    while (i <= mij) {
        v[++k] = o[i++];
    }
    while (j <= dr) {
        v[++k] = o[j++];
    }
    j = 1;
    
    for (int i = st; i <= dr; i++) {
        o[i] = v[j++];
    }
}

void MergeSort(int st, int dr) {
    if (st == dr) return;

    if (st < dr) {
        int mij = (st + dr) / 2;
        MergeSort(st, mij);
        MergeSort(mij + 1, dr);
        interclasare(st, dr, mij);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        o[i] = i;
    }
    
    MergeSort(1, n);
    
    for (int i = 1; i <= n; i++) {
        cout << o[i] << " "; 
    }
    
    return 0;
}
