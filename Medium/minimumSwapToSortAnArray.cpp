#include<bits/stdc++.h>
using namespace std;
//recursive approach
//link ->https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
int maxswap=0;
void swaparr(int *arr,bool *visited,int i){
    if(arr[i]==i){
        visited[i]=true;
        return ;
    }
    if(visited[i]==true){
        arr[i]=i;
        maxswap--;
        return;
    }

    int k=arr[i];

    maxswap++;
   visited[i]=true;
    swaparr(arr,visited,k);
   arr[i]=i;





    return;

}
int main(){
    int n;
    cin>>n;
    n=n+1;
    int *arr=new int[n];
    bool *visited=new bool[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        visited[i]=false;
    }
    for(int i=1;i<n;i++){
        swaparr(arr,visited,i);
    }
    cout<<maxswap<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
