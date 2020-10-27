#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zerocount=0;
        int anszero=0;
        int onecount=0;
        int ansone=0;
        for(int i=1;i<n;i++){
            if(s[i-1]=='0'&&s[i]=='0'){
                zerocount++;
            }
            else{
                anszero+=zerocount;
                zerocount=0;
            }
        }
        for(int i=1;i<n;i++){
            if(s[i-1]=='1'&&s[i]=='1'){
                onecount++;
            }
            else{
                ansone+=onecount;
                onecount=0;
            }
        }
        cout<<max(anszero,ansone)<<endl;
    }
}

