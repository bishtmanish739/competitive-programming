#include<iostream>
#include<algorithm>
using namespace std;
//#define int long long int
int dp[4040][4040];
int prefix[4040];
int solution(int i,int consider,int n,int k,int *arr){
    if(consider>=k && (prefix[i]-consider>=k)) {
        return 0;
    }
    else if(i>=n) {
         return 99999;
    }
    else if(dp[i][consider]!=-1){
        return dp[i][consider];
    } 

    int considerkaro = solution(i+1,min(consider+arr[i],prefix[i]-consider),n,k,arr);
    int considerMatkaro = solution(i+1,min(prefix[i]-consider+arr[i],consider),n,k,arr);
    
    return dp[i][consider] = 1+min(considerkaro,considerMatkaro);
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mod=1000000007;
    int t;
    cin>>t;
    while(t--){
       int n,k; cin>>n>>k;
        int *arr=new int[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
             for(int j=0;j<=k+10;j++) {
                dp[i][j]=-1;
            }
        }
        
    if(sum<(2*k)){
         cout<<"-1"<<'\n';
    }
    else if(n==1){
        cout<<"-1"<<'\n';
        
    }
    else{
        sort(arr,arr+n);
         
        for(int i=0;i<=n+10;i++){
            if(i<n/2){
                swap(arr[i],arr[n-i-1]);
            }
            prefix[i]=0;
            if(i>0&& i<=n){
                 prefix[i]=prefix[i-1]+arr[i-1];
            }
           
        }
       
       int ans = solution(0,0,n,k,arr);
        if(ans>9999){
            cout<<-1<<'\n';
        }
        else{
            cout<<ans<<'\n';
        }

    }
    }
    
}