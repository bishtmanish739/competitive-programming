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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int alice=0;
        int bob=0;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(count%2==0){
                //alice turn
                if(arr[i]%2==0){
                    alice+=arr[i];
                }
            }
            else{
                //bob turn
                 if(arr[i]%2!=0){
                    bob+=arr[i];
                }
            }
            count++;
        }
        if(alice>bob){
            cout<<"Alice"<<endl;
        }
        else if(bob>alice){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }

   

  return 0;  
}
