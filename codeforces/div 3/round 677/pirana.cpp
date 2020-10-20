#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         int *arr=new int[n+2];
      arr[0]=INT_MAX;
      arr[n+1]=INT_MAX;
       for(int i=1;i<=n;i++){
           cin>>arr[i];




       }
       int maxindex=-1;
       int maxvalue=-1;
       for(int i=1;i<=n;i++){
           if((arr[i]>arr[i-1]||arr[i]>arr[i+1])&&(arr[i]>maxvalue)){
              // cout<<arr[i]<<" ";
               maxvalue=arr[i];
               maxindex=i;
           }




       }
       cout<<maxindex<<endl;
    }
}
