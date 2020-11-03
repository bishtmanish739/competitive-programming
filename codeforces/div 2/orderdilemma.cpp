#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
   int t;
   cin>>t;
   while(t--){
       vector<int  >  v1;
        vector<int  >  v2;
        int n;
        cin>>n;
        int maxx=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
           // maxx=max(k,maxx);
            v1.push_back(k);
        }
         for(int i=0;i<n;i++){
            int k;
            cin>>k;
            sum+=k;
            v2.push_back(k);
        }
        vector<pair<int ,int> > v3;
         for(int i=0;i<n;i++){
            v3.push_back(make_pair(v1[i],v2[i]));
        }

        sort(v3.begin(),v3.end());

        int ans=0;
        int fans=0;

         for(int i=n-1;i>=0;i--){
             ans+=v3[i].second;
             if(ans<v3[i].first){
                 continue ;

             }
            else if(v3[i].first<ans){
                 fans=max(ans-v3[i].second,v3[i].first);
                 break;


             }
             else{
                 fans+=v3[i].first;
                 break;

             }



             }
             if(fans!=0){
                 cout<<fans<<endl;

             }
             else{
                  cout<<sum<<endl;

             }



         }






   return 0;

}

