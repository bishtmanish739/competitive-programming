#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int > arr;
	int sum=INT_MIN;
	int currsum=0;
	for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
	}
	//sum=arr[0];
	for(int i=0;i<n;i++){
	    currsum+=arr[i];
	    //cout<<arr[i]<<endl;
	    sum=max(currsum,sum);
        if(currsum>0){
            sum=max(currsum,sum);


        }
        else{
            currsum=0;
        }
	}
	cout<<sum<<endl;


}
