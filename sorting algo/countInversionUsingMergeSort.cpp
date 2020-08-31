#include <iostream>
using namespace std;
long long int count=0;
//count Inversion using mergesort
void mergearr(int *arr,int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int i=0;
    int j=0;
    int *left=new int[n1];
    int *right=new int [n2];
   for (i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];


    int k=l;
    i=0;j=0;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
             arr[k]=right[j];
             ::count+=n1-i;//coutnt inversion
            j++;
            k++;

        }
    }
  for(i;i<n1;i++){
      arr[k++]=left[i];
  }
   for(j;j<n2;j++){
      arr[k++]=right[j];
  }


    return;
}
void mergesort(int *arr,int l,int r){
    if(l>=r){
        return;

    }
    int m=(l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    mergearr(arr,l,m,r);
    return ;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        ::count=0;
    int n;
    cin>>n;

   int *arr=new int [n];
   for(int i=0;i<n;i++){
       cin>>arr[i];

   }
   mergesort(arr,0,n-1);

   cout<<::count<<endl;;
   delete arr;
    }
   return 0;
}
