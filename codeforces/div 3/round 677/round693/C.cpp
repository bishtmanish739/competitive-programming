#include <bits/stdc++.h>
using namespace std;
#define int long long int 
vector<int > primeSeive(int n){
    bool visited[n+1]; 
    memset( visited, true, sizeof( visited)); 
    //initially mark as all number till n are prime number
  
    for (int p=2; p*p<=n; p++) 
    { 
     
        if (visited[p] == true) 
        { 
           
            for (int i=p*p; i<=n; i += p) 
               visited[i] = false; 
        } 
    } 
  //now add those element in a vector which are marked as true
    vector<int > primeNumber;
    for (int p=2; p<=n; p++) {
         if (visited[p]) {
           primeNumber.push_back(p);
       }

    }
    return primeNumber;
      
         
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mod=1000000007;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        int one=0;
        int two=0;
        int maxsum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxsum+=arr[i];
            
        }
        int max=arr[0];
        int *dp=new int[n];
        for(int i=0;i<n;i++){
            dp[i]=-1;

        }

       for(int i=0;i<n;i++){
           int curr=0;
           
           for(int j=i;j<n;){
               if(dp[j]!=-1){
                    curr+=dp[j];
                    break;

               }
               
                curr+=arr[j];
                j+=arr[j];

           }
           if(curr>max ){
               max=curr;
              
           }
           if(i+arr[i]<n)
           dp[i+arr[i]]=curr-arr[i];

       }
       cout<<max<<endl;
    }
   

  return 0;  
}