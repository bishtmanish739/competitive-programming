#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

       ll r,c;
       cin>>r>>c;
       for(int j=0;j<=c;j++){
         for(int  i=1;i<=r;i++)
            cout<<"U";

         for(int  i=1;i<=r;i++)
            cout<<"D";
         cout<<"R";
       }

       for(int j=0;j<=r+1;j++){
         for(int  i=1;i<=c;i++)
            cout<<"L";

         for(int  i=1;i<=c;i++)
            cout<<"R";
         cout<<"U";
       }

return 0;
}
