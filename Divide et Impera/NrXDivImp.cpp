int NrXDivImp(int a[], int st, int dr, int x){
    
    if(st == dr){
        return a[st]==x?1:0;
    }
    
    int mij = (st+dr)/2;
    int s1 = NrXDivImp(a, st, mij, x);
    int s2 = NrXDivImp(a, mij+1, dr, x);
    
    return s1+s2;
    
}
