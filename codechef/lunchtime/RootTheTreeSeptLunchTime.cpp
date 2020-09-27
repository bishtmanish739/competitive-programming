#include <iostream>
using namespace std;

int main() {
	// your code goes
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   bool arr[10001][10001]={false};
	   int freq[100001]={0};

	    for(int i=1;i<n;i++){
	        int u;
	        int v;
	        cin>>u;
	        cin>>v;
	        arr[u][v]=true;
	        freq[v]++;

	    }
	    int ans=0;
	     for(int i=1;i<=n;i++){


	         int k=freq[i];
	         if(k>1){
	             ans+=(freq[i]-1);
	         }
	     }
	     cout<<ans<<endl;
	}
	return 0;
}

