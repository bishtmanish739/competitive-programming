#include<bits/stdc++.h>
using namespace std;
//link->https://codeforces.com/contest/1427/problem/A
#define int long long int
bool grater(int a,int b){
    return a>b;

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);

            sum+=v[i];
        }
        if(sum==0){
            cout<<"NO"<<endl;
        }
        else{
                cout<<"YES"<<endl;
                if(sum>0){
                    sort(v.begin(),v.end(),grater);
                }
                else{
                     sort(v.begin(),v.end());
                }
                for(int i=0;i<v.size();i++){
                    cout<<v[i]<<" ";

                }
                cout<<endl;






            }




    }

    return 0;
}
