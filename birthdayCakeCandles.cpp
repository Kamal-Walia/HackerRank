//birthdayCakeCandles
int birthdayCakeCandles(int n, vector<int> ar) {
    int i,max=ar[0],c=0;
    for(i=0;i<ar.size();i++)
        if(max<ar[i])
            max=ar[i];

    for(i=0;i<ar.size();i++)
        if(max==ar[i])
            c++;
return c;
    
}