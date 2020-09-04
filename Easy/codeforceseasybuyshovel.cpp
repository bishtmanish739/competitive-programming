#include<bits/stdc++.h>
using namespace std;
//link -> https://codeforces.com/contest/732/problem/A
int main(){
    int k;
    cin>>k;
    int r;
    cin>>r;
    int i=1;
    for(i=1;i<=10;i++){
        if((k*i)%10==0||(k*i)%10==r){
            break;
        }


    }
    cout<<i<<endl;



    return 0;
}
