#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int totalsum=(n*(n+1))/2;
//cout<<totalsum<<endl;
    if(totalsum%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
            cout<<"YES"<<endl;
            vector<int> v1;
            vector<int > v2;
            totalsum/=2;

            for(n;n>=1;n--){
                    if(totalsum>=n){
                        v1.push_back(n);
                        totalsum-=n;
                    }
                    else{
                            v2.push_back(n);

                    }

            }
            cout<<v1.size()<<endl;
            for(int i=0;i<v1.size();i++){
                cout<<v1[i]<<" ";
            }
            cout<<endl;
            cout<<v2.size()<<endl;
            for(int i=0;i<v2.size();i++){
                cout<<v2[i]<<" ";
            }
        cout<<endl;
    }

return 0;}
