//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        // Code here.
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            
            sum=(sum^nums[i]);
        }
      //  cout<<sum<<endl;
        
        int mask=sum & ((-sum));
        vector<int > g2;
        vector<int >g1;
        //cout<<mask<<endl;
        for(int i=0;i<nums.size();i++){
           // cout<<(mask & nums[i])<<endl;
            if((mask & nums[i])==0){
                g1.push_back(nums[i]);
            
            }
            else{
                 g2.push_back(nums[i]);
            }
        }
        vector<int > ans;
        int final=g1[0];
        for(int i=1;i<g1.size();i++){
        //cout<<g1[i]<<" ";
            final=final^g1[i];
        }
         //cout<<endl;
        ans.push_back(final);
        final=g2[0];
        for(int i=1;i<g2.size();i++){
           //  cout<<g2[i]<<" ";
            final=final^g2[i];
        }
       // cout<<endl;
        ans.push_back(final);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends