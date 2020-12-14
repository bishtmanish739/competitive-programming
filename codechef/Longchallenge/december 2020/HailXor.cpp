#include <bits/stdc++.h>
using namespace std;
#define int long long int 
vector<int > setbitPosition(int n){
    vector<int > v;
    int i=0;
    while(n!=0){
        if(n&1==1){
            v.push_back(i);

        }
        n=(n>>1);
        i++;
    }
    return v;
}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mod=1000000007;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int > v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++){
            int k;
            cin>>k;
            v[i]=k;
        }
       // vector<int >setbit=setbitPosition(6);
       int j=2;
         int operation=0;
       for(int i=1;i<n;i++){
           if(x==0){
               break;
           }
           int c=v[i];

           vector<int >setbit=setbitPosition(c);
         
           for(int l=setbit.size()-1;l>=0;l--){
               if(x==0){
               break;
           }
               int p=setbit[l];
               p=1<<p;
               v[i]=v[i]^p;
               int j=0;
               for(j=i+1;j<=n;j++){
                   int curr=v[j];
                   if((curr^p)<curr){
                       v[j]=curr^p;
                       break;
                   }
               }
               if(j==n+1){
                   v[n]=v[n]^p;

               }
               //operation++;
               x--;
           }

       }
       // for(int i=1;i<=n;i++){
         //  cout<<v[i]<<" ";
      // }
      // cout<<endl;
      /// x=x-operation;
       if(x>0){
            if(x%2!=0&&n==2){
                v[1]=1;
                v[2]=v[2]^1;

        }
       

       }
       for(int i=1;i<=n;i++){
           cout<<v[i]<<" ";
       }
       cout<<endl;
       
       
        

    }

  return 0;  
}
