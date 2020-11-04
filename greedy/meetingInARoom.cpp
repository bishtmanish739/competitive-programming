#include <bits/stdc++.h>
using namespace std;
//link=https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0

int main() {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int > v1(n);
            vector<pair<int,pair<int,int>>>   v2;
            for(int i=0;i<n;i++){
                int k;
                cin>>k;
                v1[i]=k;

            }
           for(int i=0;i<n;i++){
                int k;
                cin>>k;
                v2.push_back(make_pair(k,make_pair(v1[i],i)));


            }
            int boundary=-1;

            sort(v2.begin(),v2.end());
            for(int i=0;i<n;i++){
                if(v2[i].second.first>=boundary){
                    boundary=v2[i].first;
                    cout<<v2[i].second.second+1<<" ";

                }


            }
            cout<<endl;


        }
	return 0;
}
