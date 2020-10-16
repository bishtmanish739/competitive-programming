#include<bits/stdc++.h>
using namespace std;
#define int long long unsigned int
int32_t main(){
       int n;
    cin>>n;
    int modulo=1e9+7;
    int p=1;
    for(int i=1;i<=n;i++){
        p=(p<<1)%modulo;
    }
    cout<<p%modulo<<endl;
return 0;

}
