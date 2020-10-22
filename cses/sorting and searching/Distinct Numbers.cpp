#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int ,bool> mymap;
    int count=0;

    for(int i=0;i<n;i++){
            int k;
            cin>>k;
            if(mymap.find(k)==mymap.end()){
                    count++;
                    mymap[k]=true;


            }

    }
    cout<<count<<endl;


return 0;
}
