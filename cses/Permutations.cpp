#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==4){
        cout<<"2 4 1 3"<<endl;
        return 0;
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    if(n<5){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
            int j=0;
        for(int i=1;i<=n|| j<=n;i+=2){
                if(i<=n){
                    cout<<i<<" ";
                }

            if(i==5){
                j=2;
            }
    if(j>1){
            cout<<j<<" ";
            j+=2;

    }

        }
    }
return 0;
}
