#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

            string s1=s.substr(0,n-1);
            string s2=s.substr(n-1,n);
            size_t found = s1.find(s2);
            if (found != string::npos) {

               cout<<"YES"<<endl;


            }

        else{

            cout<<"NO"<<endl;

        }

    }

}
