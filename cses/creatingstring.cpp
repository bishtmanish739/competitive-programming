#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
sort(s.begin(), s.end());
map<string,bool> myset;
  do {
        myset[s]=true;
    } while (next_permutation(s.begin(), s.end()));
    cout<<myset.size()<<endl;
    for(auto it:myset){
            //cout<<"e";
        cout<<it.first<<endl;
    }
    return 0;
}
