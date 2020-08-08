#include <bits/stdc++.h>

using namespace std;

//link-> https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

int minbrives(int* arr,int n){
    int totalbrives=0;
    for(int i=n;i>1;i--){
        if(arr[i]!=i){
            if(arr[i-1]==i){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
                totalbrives+=1;


            }
             else if(arr[i-2]==i){
                 int temp=arr[i-2];
                 arr[i-2]=arr[i-1];
                 arr[i-1]=temp;
                 temp=arr[i-1];
                 arr[i-1]=arr[i];
                 arr[i]=temp;
                 totalbrives+=2;



            }
            else{
                return -1;
            }
        }

    }

   return totalbrives;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=n+1;
        int * arr=new int [n];
        arr[0]=0;
        for(int i=1;i<n;i++){
            cin>>arr[i];

        }
        int k=minbrives(arr,n-1);
        if(k==-1){
            cout<<"Too chaotic"<<endl;

        }
        else{
            cout<<k<<endl;

        }


    }
    return 0;
}


