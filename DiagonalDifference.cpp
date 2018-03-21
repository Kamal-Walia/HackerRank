//Diagonal Difference
int diagonalDifference(vector<vector<int>> a) {
    int i,j,sum1=0,sum2=0;
    for(i=0;i<a.size();i++)
        for(j=0;j<a.size();j++){
            if(i==j)
                sum1=sum1+a[i][j];
            if ((i+j)==(a.size()-1))
         sum2 = sum2 + a[i][j];
        }
    return sum1>sum2?sum1-sum2:sum2-sum1;

}