#include <bits/stdc++.h>
using namespace std;
#define int long long int
//link=https://codeforces.com/contest/1428/problem/C

int32_t main() {
    int t;
    cin>>t;
    string s;
    while(t--){
       map<char,int> mymap;
        cin>>s;
        int n=s.size();
        int newa=0;
        int newb=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='A'){
                newa++;
            }
            else{
                if(newa>0){
                     newa--;

                }
                else{
                    mymap['B']++;
                }

                }


            }
             cout<<(mymap['B']%2)+newa<<endl;
        }






}
