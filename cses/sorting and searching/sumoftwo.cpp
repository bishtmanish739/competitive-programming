#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	cin >> n >> x;
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr.begin(), arr.end());
	int i=0;
	int j=n-1;
	while(i<j){
            if(arr[i].first+arr[j].first==x){
                cout<<arr[j].second<<" "<<arr[i].second<<endl;
                return 0;
            }
            if(arr[i].first+arr[j].first<x){
                    i++;
            }
            else {
                j--;
            }

	}
	cout << "IMPOSSIBLE";


return 0;
}
