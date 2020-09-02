#include<bits/stdc++.h>
//link =https://leetcode.com/problems/climbing-stairs/submissions/
using namespace std;
class Solution {
public:
    int climbStairs(int n) {

    int arr[100000]={0};//=new int[n+1];
    //memset(arr,0,n+1);
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;

    for(int i=4;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];

}
  //  cout<<arr[n]<<endl;
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
