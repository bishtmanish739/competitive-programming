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
    string s;
    cin>>s;
    int lis=1;
    int bestzero=0;
    int bestone=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            bestone=1+max(bestzero,bestone);
        }
        else{
           bestzero++;
        }
        lis=max(bestone,bestzero);
    }
    cout<<n-lis<<endl;

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
