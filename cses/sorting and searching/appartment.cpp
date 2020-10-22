#include<bits/stdc++.h>
using namespace std;
//link=https://cses.fi/problemset/task/1084/
#define int long long int
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k;
    cin>>k;
    vector<int> v;
    vector<int > v1;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);



    }
    for(int i=0;i<m;i++){
            int k;
            cin>>k;
            v1.push_back(k);


    }
    sort(v.begin(),v.end());
     sort(v1.begin(),v1.end());



    int j=0;
    int count=0;
    int i=0;
    while(i<v.size()&&j<v1.size()){
        if(v1[j]<=v[i]+k && v1[j]>=v[i]-k){
            i++;
            j++;
            count++;
        }
        else if(v1[j]<v[i]-k){
            j++;
        }
        else if(v1[j]>v[i]+k){
            i++;
        }
    }
    cout<<count<<endl;



    return 0;
}
