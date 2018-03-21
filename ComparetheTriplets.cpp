//Compare the Triplets
vector<int> solve(int a0, int a1, int a2, int b0, int b1, int b2) {
    vector<int> comp(2);
    if(a0<b0)
        comp[1]=1;
    if(a0>b0)
        comp[0]=1;
    if(a1<b1)
        comp[1]=comp[1]+1;
    if(a1>b1)
        comp[0]=comp[0]+1;
    if(a2<b2)
        comp[1]=comp[1]+1;
    if(a2>b2)
        comp[0]=comp[0]+1;
return comp;
}
