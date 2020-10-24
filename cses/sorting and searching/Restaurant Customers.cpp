#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arrival;
    vector<int > leaving;
    for(int i=0;i<n;i++){
            int a;
            cin>>a;
            int l;
            cin>>l;
            arrival.push_back(a);
            leaving.push_back(l);

    }
    sort(arrival.begin(),arrival.end());
    sort(leaving.begin(),leaving.end());
    int i=0;
    int j=0;
    int count=0;
    while(i<n&&j<n&&count<=n){
        if(arrival[i]<leaving[j]){
            i++;
            count++;
        }
        else{
            j++;
            i++;
        }
    }
    cout<<count<<endl;
return 0;
}
