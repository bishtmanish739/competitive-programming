#include<bits/stdc++.h>
using namespace std;
#define int long long int
/*meaning:
a = 2x + 1y
b = 1x + 2y

on solving for a and b

2a - b = 3x
2b - a = 3y

x and y should be non negative , and from here we can derive (a+b)%3==0.*/
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int b;
        cin>>b;
        if(a>(2*b)||b>(2*a)){
            cout<<"NO"<<endl;
        }
        else{
            if((a+b)%3==0)  {
                    cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }


return 0;
}
