#include <bits/stdc++.h>
using namespace std;

//link->https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
//another aproach ->https://youtu.be/BP7GCALO2v8
int main() {
	//code
	int t;
	cin>>t;
        while(t--){
            int n;
            cin>>n;
           // cout<<n<<endl;
            //priority_queue<int,vector<int>, greater<int>> q;
            int arr[100000]={0};

            int max=-1;
            for(int i=0;i<n;i++){
                int l;
                cin>>l;
                if(l>max){
                    max=l;
                }
                arr[l]++;
            }

            int k;
            cin>>k;
            int j=0;
            for(int i=1;i<=max;i++){
                if(arr[i]!=0){
                    j+=arr[i];
                   // cout<<i<<" "<<j<<endl;


                    if(k<=j){
                       cout<<i<<endl;
                       break;

                    }



                }

            }
           // cout<<arr[k]<<endl;
        }
	return 0;
}
