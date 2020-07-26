#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int k=n;

    map<string,string> mymap;
    while(n--){
        string name;
        cin>>name;
       string number;
        cin>>number
        ;
        mymap[name]=number;


    }
    string s;

while(cin>>s){

        if(mymap.find(s)!=mymap.end()){
            cout<<s<<"="<<mymap[s]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }

    }
    return 0;
}

