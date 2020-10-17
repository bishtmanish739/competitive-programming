//https://codeforces.com/contest/1428/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int totalTime=0;
        totalTime+=abs(x1-x2);
        if(x1==x2||y1==y2){
            cout<<abs(x1-x2)+abs(y1-y2)<<endl;
        }else{
            cout<<abs(x1-x2)+abs(y1-y2)+2<<endl;
        }
    }

}

