#include<bits/stdc++.h>
using namespace std;
//link -https://cses.fi/problemset/task/1069
int main(){

    string s;
    cin>>s;
    int max=1;
    int curr=1;
    for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                curr++;
                if(curr>max){
                    max=curr;
                }
            }
            else{
                curr =1;
            }


    }
    cout<<max<<endl;
return 0;
}
