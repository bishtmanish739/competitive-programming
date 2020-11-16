#include<bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int > v;
       for(int i=0;i<n;i++){
           int k;
           cin>>k;
           v.push_back(k);

       }
       sort(v.begin(),v.end());
       int max=v[n-1];
       int burnur1=v[n-1];
       int burnur2=0;
       if(n>1){
             burnur2=v[n-2];
       }

       for(int i=n-3;i>=0;i--){
           if(burnur1<burnur2){
               burnur1+=v[i];
            if(max<burnur1)
            max=burnur1;
           }
           else{
               burnur2+=v[i];
                if(max<burnur2)
            max=burnur2;
           }
           }
            cout<<max<<endl;

       }

   }



