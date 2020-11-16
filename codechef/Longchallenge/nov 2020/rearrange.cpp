#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        vector<int > v1;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
            v1.push_back((2*n )-i);

        }
        for(int i=0;i<n;i++){
            int k=v[i];
            if(v1[i]>v1[k-1]){
                v1[k-1]=v1[i];
            }
            else{
                v1[i]=v1[k-1];
            }
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
}

