#include<bits/stdc++.h>
using namespace std;
int main() {
        long long n;
        cin>>n;
long long k;
        for ( k=1; k<=n ; k++ ) {
      cout<< (k*k)*(k*k-1)/2 - 4*(k-1)*(k-2)<<"\n";
                }
        return 0;
        }
