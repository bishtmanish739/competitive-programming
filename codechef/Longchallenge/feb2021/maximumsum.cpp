#include <bits/stdc++.h>
using namespace std;
#define int long long int 
#define endl '\n'
#define MOD 1000000007
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
void TestCase(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int x=v[0];
    int z=v[n-1];
    int maxx=INT_MIN;
    int y=v[1];

    for(int i=1;i<n-1;i++){
        int l=v[i];
        if(maxx<(abs(l-z)+abs(x-l))){
            maxx=(abs(l-z)+abs(x-l));
            y=v[i];
        }


    }
    cout<<maxx+abs(z-x)<<endl;

}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        TestCase();
    }
   
    
    
   
   

  return 0;  
}
