#include <bits/stdc++.h>
using namespace std;
//link=https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

int main() {

	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int m;
	    cin>>m;
	    bitset<100000> a1;
	    bitset<100000> a2;
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        a1[k]=1;
	    }
	    for(int i=0;i<m;i++){
	        int k;
	        cin>>k;
	        a2[k]=1;
	    }
	    a1|=a2;
	    cout<<a1.count()<<endl;
	}
	return 0;
}
