#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=4*n;
        for(int i=1;i<=n;i++){


                cout<<k<<" ";


             k-=2;


        }
        cout<<endl;
    }

    return 0;
}

