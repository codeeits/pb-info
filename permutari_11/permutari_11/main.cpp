//
//  main.cpp
//  permutari_11
//
//  Created by Robert Ciobanu on 2/26/26.
//

#include <iostream>

using namespace std;

int n, x[11], use[11];

bool valid(int k){
    if (k == (n+1)/2) {
        if (x[k] != n) {
            return false;
        }
    }
    return true;
}

void afisare(){
    for (int i = 1; i<=n; i++) {
        cout << x[i] << ' ';
    }
    cout << '\n';
}

void BKT(int k){
    for (int i = 1; i<=n; i++) {
        if (!use[i]) {
            x[k] = i;
            use[i] = 1;
            if (valid(k)) {
                if (n == k) {
                    afisare();
                } else {
                    BKT(k+1);
                }
            }
            use[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    BKT(1);
    return 0;
}
