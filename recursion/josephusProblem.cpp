#include <bits/stdc++.h>
using namespace std;
int solve(vector<int >&v,int index,int k,int &ans){
    if(v.size()==1){
        return ans=v[0];
    }
     index=(index+k)%v.size();
     v.erase(v.begin()+index);
     return solve(v,index,k,ans);
     //1 2 3



}
int josephus(int n, int k)

{
    vector<int > v;
    for(int i=1;i<=n;i++){
        v.push_back(i);

    }
    int ans=0;
    return solve(v,0,k-1,ans);

   //Your code here
}


int main() {

	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k

		//calling josephus() function
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends

///1 2 3 4 5
/*You are required to complete this method */

//
