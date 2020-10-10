#include<bits/stdc++.h>
using namespace std;
//link-https://cses.fi/problemset/task/1083/
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n-1;i++){
        int k;
        cin>>k;
        v.push_back(k);


    }
    sort(v.begin(),v.end());
    int count=1;
    for(int i=0;i<n;i++){
        if(v[i]!=count){
            cout<<count<<endl;
            break;
        }
        count++;

    }

return 0;}
