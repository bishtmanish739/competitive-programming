#include <bits/stdc++.h>
using namespace std;
#define int long long int 
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
       int d;
       cin>>d;
       int risk=0;
       int Notrisk=0;
       for(int i=0;i<n;i++){
           int p;
           cin>>p;
           if(p<=9||p>=80){
               risk++;
           }
           else{
               Notrisk++;
           }
       }
       if(risk%d==0&&Notrisk%d==0){
           cout<<(risk/d)+(Notrisk/d)<<endl;
       }
       else if(risk%d==0&&Notrisk%d!=0){
           cout<<(risk/d)+(Notrisk/d)+1<<endl;

       }
       else if(risk%d!=0&& Notrisk%d==0){
            cout<<(risk/d)+(Notrisk/d)+1<<endl;

       }
       else{
            cout<<(risk/d)+(Notrisk/d)+2<<endl;
       }
   }

  return 0;  
}
