
// { Driver Code Starts
//link=https://practice.geeksforgeeks.org/problems/number-of-open-doors1552/1/?company[]=TCS&page=1&query=company[]TCSpage1#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution {
  public:
    int noOfOpenDoors(long long N) {
        return sqrt(N);
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;

        cin>>N;

        Solution ob;
        cout << ob.noOfOpenDoors(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
