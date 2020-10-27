#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int > arr;
	for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
	}
	sort(arr.begin(),arr.end());
	int median=arr[n/2];
	int totalcost=0;
	for(int i=0;i<n;i++){
        totalcost+=abs(arr[i]-median);
	}
	cout<<totalcost<<endl;



}
