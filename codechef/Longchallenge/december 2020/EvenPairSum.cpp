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
        int a;cin>>a;
        int b;
        cin>>b;
        int even1=a/2;
        int odd1=a-even1;
        int even2=b/2;
        int odd2=b-even2;
        cout<<(odd1*odd2)+(even1*even2)<<endl;
    }

  return 0;  
}
