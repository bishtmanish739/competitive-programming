#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int inc=arr[0];
    int ex=0;
    for(int i=1;i<n;i++){
        int newin=ex+arr[i];
        int newex=max(ex,inc);
        inc=newin;
        ex=newex;
        
    }
    cout<<max(inc,ex)<<endl;
    
    return 0;
}