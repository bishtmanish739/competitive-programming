#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int *arr=new int [n+1];
        arr[0]=0;
        for(int i=1;i<n+1;i++){
           cin>>arr[i];
           sum+=arr[i];

        }
        if(sum<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
}

