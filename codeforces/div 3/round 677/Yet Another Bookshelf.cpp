#include <iostream>
using namespace std;
void searchans(int*a,int n){
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            first=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            last=i;
        }
    }
    if(first==-1||last==-1||first==last){
        cout<<0<<"\n";
        return;
    }
    int count=0;
    for(int i=first;i<=last;i++){
        if(a[i]==0){
            count++;
        }
    }
    cout<<count<<"\n";

}
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int *arr=new int[n];

       for(int i=0;i<n;i++){
           cin>>arr[i];




       }
       searchans(arr,n);

   }
}

