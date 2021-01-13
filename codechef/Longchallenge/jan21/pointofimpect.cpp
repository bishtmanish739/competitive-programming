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
        int n,k;
        cin>>n>>k;
        int x,y;
        cin>>x>>y;
        bool anti=false;
        bool clock=true;
        vector<pair<int ,int> > v(4);
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }
        else if(x>y){
            anti=true;
            int z=min(n,n+y-x);
            pair<int ,int > p=make_pair(n,z);
            v[0]=p;
            p=make_pair(z,n);
            v[1]=p;
            p=make_pair(0,n-z);
            v[2]=p;
            p=make_pair(n-z,0);
            v[3]=p;

            /*cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }*/

            int l=k%4;
             if(l==0){
                l=4;
            }
         cout<<v[l-1].first<<" "<<v[l-1].second<<endl;
            
        }
        else if(y>x){
            clock=true;
            int z=n-y+x  ;//min(n,n+y-x);
            pair<int ,int > p=make_pair(z,n);
            v[0]=p;
            p=make_pair(n,z);
            v[1]=p;
            p=make_pair(n-z,0);
            v[2]=p;
            p=make_pair(0,n-z);
            v[3]=p;

           /* cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
           
        }*/
            int l=k%4;
            if(l==0){
                l=4;
            }
         cout<<v[l-1].first<<" "<<v[l-1].second<<endl;
        }
        
        
    }
   

  return 0;  
}
