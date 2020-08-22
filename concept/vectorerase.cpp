#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<long long int >v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int b,c,d;
    cin>>b>>c>>d;
    v.erase(v.begin()+b-1);
    v.erase(v.begin()+c-1,v.begin()+d-1);

     //  v.erase(v.begin()+l-1,v.begin()+d);


    n=v.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

