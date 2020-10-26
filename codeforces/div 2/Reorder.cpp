#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;
        int sum=0;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            sum+=k;


        }
        if(sum==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

