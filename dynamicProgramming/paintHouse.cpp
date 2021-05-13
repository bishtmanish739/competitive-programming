#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    int red=0;
    int b=0;
    int g=0;
    cin>>red;
    cin>>b;
    cin>>g;
    
    for(int i=1;i<n;i++){
        int newred,newb,newg;
        cin>>newred>>newb>>newg;
        int k=newred+min(b,g);
        int l=newb+min(red,g);
        int m=newg+min(red,b);
        red=k;
        b=l;
        g=m;
        
    }
    
    cout<<min(red,min(b,g))<<endl;
    
    return 0;
}