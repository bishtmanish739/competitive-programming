#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll partition(ll a[],ll s,ll e){
     ll i=s-1;
     ll j=s;
     ll pivot=a[e];
     for(int j=s;j<=e-1;j++){
          if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
          }
     }
     swap(a[e],a[i+1]);
  return i;
}
void quick_sort(ll a[],ll s,ll e){

  if(s>=e){
    return;
  }
  ll p=partition(a,s,e);
  quick_sort(a,s,p);
  quick_sort(a,p+1,e);
}
int main(){

   ll n,a[1000];
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   quick_sort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
