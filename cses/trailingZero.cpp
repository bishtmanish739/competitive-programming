#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int n;
    cin>>n;
    int ans=0;
    int k=5;
    while(n/k>0){
        ans+=n/k;
        k=k*5;
    }
    cout<<ans<<endl;
return 0;
}
