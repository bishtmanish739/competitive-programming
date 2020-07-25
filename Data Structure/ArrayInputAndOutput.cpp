#include<bits/stdc++.h>
using namespace std;
int main(){
    int staticArray[100];//static array
    int n;
    cin>>n;
    int *dynamicArray=new int[n];//dynamic array declaration
    for(int i=0;i<n;i++){
        cin>>staticArray[i];
        cin>>dynamicArray[i];
    }
     for(int i=0;i<n;i++){
        cout<<staticArray[i]<<" ";

    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<dynamicArray[i]<<" ";

    }
     cout<<endl;

    return 0;
}
