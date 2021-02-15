#include <bits/stdc++.h>
using namespace std;
//#define int long long int 
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
    vector<string > v;
    map<string , map<char,bool >  > mymap;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        char c=s[0];
        s[0]=' ';
        if(mymap.find(s)!=mymap.end()){
            map<char,bool > thismap=mymap[s];
            thismap[c]=true;
           mymap[s]=thismap;
           
        }
        else{
            
            map<char,bool > thismap;
            thismap[c]=true;
            mymap[s]=thismap;
        }
    }
    int ans=0;
    for(auto i= mymap.begin();i!=mymap.end();i++){
        map<char,bool> currmap=i->second;
        for(auto j= i;j!=mymap.end();j++){
            if(i->first!=j->first){
                 map<char,bool> currmap1=j->second;
                 int ans1=0;
                 int ans2=0;
                 for(auto l:currmap){
                     if(currmap1.find(l.first)==currmap1.end()){
                         ans1++;
                     }
                 }
                 for(auto l:currmap1){
                     if(currmap.find(l.first)==currmap.end()){
                         ans2++;
                     }
                 }
                 ans+=(ans1*ans2);
            }
        }
    }
    cout<<2*ans<<endl;

}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        TestCase();
    }
   
    
    
   
   

  return 0;  
}
