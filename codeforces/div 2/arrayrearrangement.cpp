#include <bits/stdc++.h>
using namespace std;
#define int long long int
//link-> https://codeforces.com/contest/1445/problem/A
bool cmp(int a,int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int > v1;
        vector<int > v2;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v1.push_back(k);
        }
         for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v2.push_back(k);
        }
       // sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int j=n-1;
        bool check=true;
         for(int i=0;i<n;i++){
             if(v1[i]+v2[j]>x){
                 cout<<"NO"<<endl;
                 check=false;
                 break;

             }
             j--;

        }
        if(check){
            cout<<"YES"<<endl;
        }





    }

}

