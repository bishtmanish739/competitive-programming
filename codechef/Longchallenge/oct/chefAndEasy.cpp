#include <iostream>
using namespace std;
//link-https://www.codechef.com/OCT20B/problems/CHEFEZQ/


int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,k;
	    cin>>n>>k;
	    long long int sum=0;
	    long long int prev=0;
	    bool check=true;
	    long long int day=0;

	    for(long long int i=0;i<n;i++){
	        long long  int d;
	        cin>>d;
	        sum+=d;
	        prev+=d;
	        if(prev<k&&check){
	            day=i+1;
	            check=false;

	        }
	        prev-=k;


	    }
	   if(check==false){
	       cout<<day<<endl;
	   }
	   else{
	      long long int ans=sum/k;
	       cout<<ans+1<<endl;
	   }
	}
	return 0;
}

