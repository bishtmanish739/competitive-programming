#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mod=1000000007;
    int d1,d2,v1,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    bool check=true;
    int curr=0;
    int ans=0;
   if(d1<d2){
       ans=d1-1;
       for(int i=d1;i<d2&&curr<p;i++){
           curr+=v1;
           ans++;
       }
       v1=v1+v2;
       while(curr<p){
           curr+=v1;
           ans++;
       }
       
   }
   else{
       ans=d2-1;
       for(int i=d2;i<d1&&curr<p;i++){
           curr+=v2;
           ans++;
       }
       v1=v1+v2;
       while(curr<p){
           curr+=v1;
           ans++;
       }
   }
   cout<<(ans)<<endl;
   

  return 0;  
}
