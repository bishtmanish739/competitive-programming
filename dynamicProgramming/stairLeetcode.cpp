#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {


    int *arr=new int[50];
   // memset(arr,0,n+1);
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;


    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];

        }
    return arr[n];

    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.climbStairs(n)<<endl;
return 0;
}
