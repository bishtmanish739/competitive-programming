#include <iostream>
using namespace std;
int dp[10000][10000]={0};
int count =0;
bool subsetsum(int*arr,int sum,int first,int last){
    if(sum==0){
        return true;

    }
    if(first>last||sum<0){
        return false;

    }
    if(dp[first][sum]!=-1){
        return true;
    }
   bool k= subsetsum(arr,sum-arr[first],first+1,last);
   bool l= subsetsum(arr,sum,first+1,last);
   if(k||l){
        dp[first][sum]=0;
       return true;
   }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
            for(int i=0;i<10000;i++){
                for(int j=0;j<10000;j++){
                    dp[i][j]=-1;
                }
            }
        int n;
        cin>>n;

         int *arr=new int [n];
         for(int i=0;i<n;i++){
             cin>>arr[n];
         }
    int sum;
    cin>>sum;
    bool k=subsetsum(arr,sum,0,6);
    if(k){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

    }



}


