#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
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
        int ans1=v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];

        int ans2=v[0]*v[1]*v[n-1]*v[n-2]*v[n-3];
        int ans3=v[0]*v[1]*v[2]*v[3]*v[n-1];
      //  cout<<ans1<<ans2<<ans3<<endl;
        cout<<max(ans1,max(ans2,ans3))<<endl;


    }
}

