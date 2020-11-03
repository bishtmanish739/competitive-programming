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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int without=0;
        int first=-1;
        int last=-1;
        bool check=true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(check){
                    first=i;
                    last=i;
                    check=false;
                }
                last=i;
                without+=1;
                while(s[i]=='1'&&i<s.length()){
                     if(check){
                    first=i;
                    last=i;
                    check=false;
                }
                    i++;
                }

            }
        }
        int countzeros=0;
         int withb=0;
        int withoutbcost=without*a;
        int ans=0;
        if(first!=-1||last!=-1){
            ans=a;
            for(int i=first;i<=last;i){
                 if(s[i]=='0'){
                     countzeros=0;
                     while(s[i]=='0'){
                         countzeros++;
                         i++;

                     }
                     ans+=min(a,(b*countzeros));

                 }
                 else{
                     i++;
                 }

            }

        }
        //int minn=min(withoutbcost,withb);





       cout<<ans<<endl;







    }

    return 0;
}
