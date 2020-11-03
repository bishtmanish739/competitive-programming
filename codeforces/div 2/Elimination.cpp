#include <bits/stdc++.h>
using namespace std;
#define int long long int
//link=https://codeforces.com/contest/1445/problem/B
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
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       cout<<max((a+b),(c+d))<<endl;

    }

}

