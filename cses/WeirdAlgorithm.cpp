 #include <iostream>
using namespace std;
//link-https://cses.fi/problemset/task/1068/
#define int long long int
int32_t main(){
int n;
cin>> n;
while(n!=1){
    cout<<n<<" ";
    if(n%2==0){
        n=n/2;
    }
    else{
        n=(n*3)+1;
    }
}
cout<<n<<endl;
return 0;}
