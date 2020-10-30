#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int x;
    cin>>x;int n;
    cin>>n;
    map<int ,bool > mymap;
    int max1=INT_MAX;
    mymap[0]=true;
    mymap[x]=true;

    pair <int,int> prev=make_pair(0,x);
    for(int i =0;i<n;i++){
        int curr;
        cin>>curr;
        mymap[curr]=true;
        auto it1=mymap.lower_bound(curr);
        it1--;
        auto it=mymap.upper_bound(curr);
        int a=curr-it1->first;
        int b=it->first-curr;
        int c=max(a,b);

        if(c<=max1&& curr<=prev.second&&curr>=prev.first){

            max1=c;
            if(a>b){
                prev.first=it1->first;
                prev.second=curr;
            }
            else {
                prev.first=curr;
                prev.second=it->first;
            }

        }


        cout<<max1<<" ";
    }

return 0;
}
