#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(long long int n){
    if(n==1){
        return false;
    }
    for(long long int i=2;(i*i)<=n;i++){
        if(n%i==0){
            return false;

        }
    }
    return true;
}


int main() {
    int t;
    cin>>t;
    while(t--){
       long long  int k;
        cin>>k;

        if(isPrime(k)){
            cout<<"Prime"<<endl;

        }
        else{
            cout<<"Not prime"<<endl;

        }

    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

