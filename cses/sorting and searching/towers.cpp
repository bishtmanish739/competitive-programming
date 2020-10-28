#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, curr;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		cin >> curr;
		auto it = upper_bound(arr.begin(), arr.end(), curr);
		if (it == arr.end())
		{
			arr.push_back(curr);
		}
		else
		{
			*it = curr;
		}
	}
	cout << arr.size();
	return 0;
}
