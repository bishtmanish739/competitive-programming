// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
       int  dp[100][100]={0};
       int maxx=0;
       for(int i=0; i<m;i++){
           if(mat[n-1][i]==1){
               dp[n-1][i]=1;
               maxx=1;
           }
           
       }
        for(int i=0; i<n;i++){
           if(mat[i][m-1]==1){
               dp[i][m-1]=1;
               maxx=1;
           }
           
       }
       
       for(int i=n-2;i>=0;i--){
           for(int j=m-2;j>=0;j--){
               if(mat[i][j]==0){
                   continue;
               }
               dp[i][j]=min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1]))+1;
               if(dp[i][j]>maxx){
                   maxx=dp[i][j];
               }
           }
       }
    
       return maxx;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends