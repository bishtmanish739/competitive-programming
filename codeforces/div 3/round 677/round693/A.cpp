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
        int w,h,n;
        cin>>w>>h>>n;
        int curr=1;
        if(w%2==0 && h%2==0){
            int ans1=0;
            int ans2=0;
            
           
            while(w%2==0 && w>=1){
                w=w/2;
                ans1++;
                curr*=2;

            }
             while(h%2==0 && h>=1){
                h=h/2;
                ans2++;
                 curr*=2;
                
            }
            
        }
        else if(w%2==0){
            int ans=0;
            while(w%2==0 && w>=1 ){
                ans++;
                w=w/2;
                curr*=2;
            }
             


        }
        else if(h%2==0){
             int ans=0;
            while(h%2==0 && h>=1 ){
                ans++;
                h=h/2;
                curr*=2;
            }
            
        }
        else if(n==1){
            curr=1;

        }
        
        if(curr>=n){
            cout<<"YES"<<endl;
            //cout<<curr<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
   

  return 0;  
}
