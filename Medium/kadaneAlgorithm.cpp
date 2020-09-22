#include <iostream>
using namespace std;
//Problem link->https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
int kadaneAlgo(int *arr,int n){
    int sum=0;
    int max=-1111111;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }


    }
    return max;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int * arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }

	    int ans=kadaneAlgo(arr,n);
	    cout<<ans<<endl;

	}
	return 0;
}
