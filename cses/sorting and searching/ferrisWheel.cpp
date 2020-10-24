#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int n;
    int x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v[i]=k;

    }
    sort(v.begin(),v.end());
    int count=0;
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[j]==x){
            count++;

            j--;
        }
        if((v[j]+v[i])<=x){
            count++;
            j--;
            i++;
        }
        else{
            count++;
            j--;
        }

    }
    cout<<count<<endl;



return 0;}
