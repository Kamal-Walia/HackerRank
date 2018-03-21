//Mini-Max Sum
void miniMaxSum(vector<int> arr) {
   int i;
    long sum1=0,sum2=0,min=arr[0],max=arr[0];
    for(i=0;i<arr.size();i++){
        if(min>arr[i]){
            min=arr[i];
            }
        if(max<arr[i]){
            max=arr[i];
            }
        sum1=sum1+arr[i];
        sum2=sum2+arr[i];
    }
    sum1=sum1-max;
    sum2=sum2-min;
    
    cout<<sum1<<" "<<sum2;
}
