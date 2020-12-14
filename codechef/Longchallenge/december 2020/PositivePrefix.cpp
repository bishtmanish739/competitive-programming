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
        int k;
        cin>>k;
        vector<int> output(n+1,0);
        vector<int> prefix(n+1,0);
        for(int i=1;i<=n;i++){
            if(i%2==0){
                output[i]=-i;

            }
            else{
                output[i]=i;

            }
        }
        int g=1;
        for(int i=1;i<=n;i++){
            prefix[i]=output[i]+prefix[i-1];
            
        }
        int positive=0;
        int negative=0;
        if(n%2==0){
            positive=n/2;
            negative=n/2;
        }
        else{
            positive=(n/2)+1;
            negative=(n/2)-1;
           
        }
        if(k<=positive){
            int diff=positive-k;
            for(int i=n;i>0&&diff>0;i--){
                if(prefix[i]>0){
                    output[i]=-output[i];
                    diff--;
                }
                

            }
        }
        else{
           int diff=k-positive;
             for(int i=n;i>0&&diff>0;i--){
                if(prefix[i]<0){
                    output[i]=-output[i];
                    diff--;
                }
                

            }
        }
        for(int i=1;i<=n;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        /* for(int i=1;i<=n;i++){
            prefix[i]=output[i]+prefix[i-1];
            
        }
        for(int i=1;i<=n;i++){
            cout<<prefix[i]<<" ";
        }*/


    }

  return 0;  
}
