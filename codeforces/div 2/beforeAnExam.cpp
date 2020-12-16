#include <bits/stdc++.h>
using namespace std;
#define int long long int 
//link=https://codeforces.com/contest/4/problem/B
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mod=1000000007;
    int d;
    int sum;
    cin>>d;
    cin>>sum;
    int minsum=0;
    int maxsum=0;
    vector<pair<int ,int> > v;
    vector<int > ans;
    vector<int > diff;
    for(int i=0;i<d;i++){
        int f,s;
        cin>>f>>s;
        minsum+=f;
        maxsum+=s;
        v.push_back(make_pair(f,s));
        ans.push_back(f);
        diff.push_back(s-f);
    }
    if(minsum<=sum && sum<= maxsum){
        cout<<"YES"<<endl;
        int k=sum-minsum;
        
        for(int i=0;i<diff.size();i++){
            
               if(k>=0){
                   if(k-diff[i]>=0){
                       ans[i]=ans[i]+diff[i];
                       k=k-diff[i];

                   }
                   else{
                       ans[i]=ans[i]+k;
                       k=-1;
                       break;
                   }
                       
                   
                   

               }
              
            
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }

  return 0;  
}
