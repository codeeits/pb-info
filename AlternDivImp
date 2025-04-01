int AlternDivImp(int a[], int st, int dr) {
    if (st == dr) {
        return 1;
    }
    
    int mij = (st + dr) / 2;
    int s1 = AlternDivImp(a, st, mij);
    int s2 = AlternDivImp(a, mij + 1, dr);

    if (s1 == 0 || s2 == 0) {
        return 0;
    }

    if (a[mij] % 2 == a[mij + 1] % 2) {
        return 0;
    }

    return 1;
}
