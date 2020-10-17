#include <bits/stdc++.h>
using namespace std;
#define int long long int
//https://codeforces.com/contest/1428/problem/B
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int k=s.size();
       int count=0;
       bool ans=false;
       for(int i=0;i<k;i++){
           if(s[i]=='<'&&s[(i+1)%k]=='<' || s[i]=='<'&&s[(i+1)%k]=='-'||s[i]=='-'&&s[(i+1)%k]=='<' || s[i]=='-'&&s[(i+1)%k]=='-'){
               ans=true;

           }
           else{
               ans=false;
               break;
           }

       }
       if(!ans){
           for(int i=0;i<k;i++){
           if(s[i]=='>'&&s[(i+1)%k]=='>' || s[i]=='>'&&s[(i+1)%k]=='-'|| s[i]=='-'&&s[(i+1)%k]=='>'||s[i]=='-'&&s[(i+1)%k]=='-' ){
               ans=true;

           }
           else{
               ans=false;
               break;
           }

       }

       }
        if(!ans){
             for(int i=0;i<k;i++){
           if(s[i]=='<'&&s[(i+1)%k]=='>'|| s[i]=='>'&&s[(i+1)%k]=='<'|| s[i]=='<'&&s[(i+1)%k]=='<'|| s[i]=='>'&&s[(i+1)%k]=='>'){
               count++;
           }
       }
       cout<<(k-count)<<endl;

        }
         else{
       cout<<k<<endl;
   }

   }

   return 0;
}

