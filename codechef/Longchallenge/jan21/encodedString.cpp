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
char solution(string s){
    if(s=="0000"){
        return 'a';

    }
     if(s=="0001"){
        return 'b';
    }
     if(s=="0010"){
         return 'c';
        
    }
     if(s=="0011"){
         return 'd';
        
    }
     if(s=="0100"){
         return 'e';
        
    }
     if(s=="0101"){
        return 'f';
    }
     if(s=="0110"){
        return 'g';
    }
     if(s=="0111"){
        return 'h';
    }
      if(s=="1000"){
        return 'i';

    }
     if(s=="1001"){
        return 'j';
    }
     if(s=="1010"){
         return 'k';
        
    }
     if(s=="1011"){
         return 'l';
        
    }
     if(s=="1100"){
         return 'm';
        
    }
     if(s=="1101"){
        return 'n';
    }
     if(s=="1110"){
        return 'o';
    }
     if(s=="1111"){
        return 'p';
    }
    return'x';

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
        string s;
        cin>>s;
        
        string ans="";
        string prev="";
        for(int i=0;i<n;i++){
            
           
                prev+=s[i];
            
            if(prev.length()==4){
                ans+=solution(prev);
                 prev="";
            }

        }
        cout<<ans<<endl;
    }
   

  return 0;  
}
