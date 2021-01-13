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
        int n,m,sum1=0,sum2=0,ans=0;
        cin>>n>>m;
        vector<int > v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v1.push_back(k);
            sum1+=v1[i];
        }
        for(int i=0;i<m;i++){
            int k;
            cin>>k;
            v2.push_back(k);
            sum2+=v2[i];
        }
        sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
         int i=0;
         int j=m-1;
         while(sum1<=sum2 && i<n && j>=0){
             sum1-=v1[i];
             sum1+=v2[j];
             sum2-=v2[j];
             sum2+=v1[i];
             i++;
             j--;
             ans++;

         }
        // cout<<sum1<<sum2<<endl;
         if(sum1<=sum2){
             cout<<-1<<endl;
         }
         else{
             cout<<ans<<endl;
         }
    }
   

  return 0;  
}
