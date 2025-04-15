//
//  main.cpp
//  SumPareVec
//
//  Created by Robert Ciobanu on 15.04.2025.
//

#include <iostream>
using namespace std;

int SumPareVec(int a[], int st, int dr){
    if(st==dr){
        return a[st]%2?0:a[st];
    }
    int mij = (st+dr)/2;
    int s1 = SumPareVec(a, st, mij);
    int s2 = SumPareVec(a, mij+1, dr);
    return s1+s2;
}
int main() {
    int n; cin >> n; int v[1001];
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    cout << SumPareVec(v, 0, n-1);
}
