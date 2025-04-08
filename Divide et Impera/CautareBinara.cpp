//
//  main.cpp
//  CautareBinara
//
//  Created by Robert Ciobanu on 08.04.2025.
//

#include <iostream>
using namespace std;

int CautareBinara(int a[], int el, int st, int dr) {
    if (st > dr)
        return 0;

    int mij = (st + dr) / 2;

    if (a[mij] == el)
        return 1;
    else if (a[mij] < el)
        return CautareBinara(a, el, mij + 1, dr);
    else
        return CautareBinara(a, el, st, mij - 1);
}

int main() {
    int n, m, x[25001], y[200001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> y[i];
    }

    for (int i = 1; i <= m; i++) {
        cout << CautareBinara(x, y[i], 1, n) << " ";
    }

    return 0;
}

