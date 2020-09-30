
// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std;
//link->https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/description/

int main() {
	int t;
	cin >> t;										// Reading input from STDIN
	while(t--){
		long long int a,b,c;
		long long int k;
		int ans=-1;
		cin>>a>>b>>c>>k;
		long long int lb=0;
		long long int up=100000;
		while(lb<=up){
			long long int mid=(lb+up)/2;
			long long int d=a*mid*mid+b*mid+c;
			if(d>=k){
				ans=mid;
				up=mid-1;
			}
			else{
				lb=mid+1;
			}
		}
		cout<<ans<<endl;






	}
}


