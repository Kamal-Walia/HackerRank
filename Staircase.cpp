//Staircase
void staircase(int n) {
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
         if(i>=j)
             cout<<"#";
        
        else
            cout<<" ";
    }
    cout<<"\n";
    }
    
}