#include <bits/stdc++.h>
using namespace std;
#define int long long int
//link- https://www.codechef.com/problems/GSUB
int gud(int*arr,int n){
    int initiallenght=0;
	    for(int i=1;i<=n;i++){
	        if(arr[i]!=arr[i-1]){
	            initiallenght++;
	        }
	    }
	    return initiallenght;

}

int32_t main() {
   ios::sync_with_stdio(NULL);
   cin.tie(NULL);
   cout.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	   // n=n+2;
	    int *arr=new int[n+2];
	    arr[0]=INT_MIN;
	    arr[n+1]=INT_MAX;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	    }

	    int initiallenght=gud(arr,n);
	   // cout<<initiallenght<<endl;
	    for(int i=0;i<q;i++){
	        int x,y;
	        cin>>x>>y;
	        if(y!=arr[x]){
	            if(arr[x]==arr[x-1]&&arr[x]==arr[x+1]){
	                initiallenght+=2;
	                arr[x]=y;
	            }
	            else if(arr[x]!=arr[x-1]&&arr[x]==arr[x+1]){
	                if(y!=arr[x-1]){
	                    initiallenght++;
	                }
	                arr[x]=y;

	            }
	            else if(arr[x]==arr[x-1]&&arr[x]!=arr[x+1]){
	                if(y!=arr[x+1]){
	                    initiallenght++;
	                }
	                arr[x]=y;

	            }
	            else if(arr[x]!=arr[x-1]&&arr[x]!=arr[x+1]){
	                arr[x]=y;
	                 if(arr[x-1]==arr[x+1]&&arr[x]==arr[x-1]){
	                     initiallenght-=2;

	                 }
	               else if(arr[x]==arr[x-1]||arr[x]==arr[x+1]){
	                    initiallenght--;
	                }


	            }
	            else if(arr[x-1]==arr[x+1]&&y==arr[x-1]){
	                initiallenght-=2;
	                arr[x]=y;

	            }
	        }
	        cout<<initiallenght<<endl;




	    }

	}
	return 0;
}
