# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int dp[100004];
//concept array are passed by reference but vector are passed by value
//link-https://www.hackerrank.com/challenges/max-array-sum/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming
int solve(int a[],int n){
    if(n<=0) return 0;
    if(dp[n] != -1){return dp[n];}
    else{ dp[n] = max((a[n-1]+solve(a,n-2)) , solve(a,n-1));}
    return dp[n];
}

int main(){
    int n; cin>>n;
    memset(dp,-1,sizeof(dp));
    int a[n],i; for(i=0;i<n;i++){cin>>a[i];}
    cout<<solve(a,n)<<endl;
}
