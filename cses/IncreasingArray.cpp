#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){

int n;
cin>>n;
int sum=0;
int * arr=new int [n];

for(int i=0;i<n;i++){

        cin>>arr[i];
        if(i>0){
            if(arr[i]<arr[i-1]){
                sum+=arr[i-1]-arr[i];
                arr[i]=arr[i-1];

            }
        }

}
cout<<sum<<endl;
return 0;
}
