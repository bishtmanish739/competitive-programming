#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool canPlaceQueens(int n,int mat[100][100],int i,int j){
    int tempi=i,tempj=j;
    //check in column
    while(tempi>=0&&mat[tempi][tempj]!=1){
        tempi--;
    }
    if(tempi!=-1)
        return false;
    // check in diagonals
    //left
    tempi=i;
    while(tempi>=0&&mat[tempi][tempj]!=1){
        tempi--;
        tempj--;
    }
      if(tempi!=-1)
        return false;

    tempi=i;
    tempj=j;
    //right
    while(tempj<=n-1&&mat[tempi][tempj]!=1){
        tempi--;
        tempj++;
    }
    if(tempj!=n)
        return false;

  return true;
}
bool nqeen(int n,int mat[100][100],int i){
      //base case
      if(i==n){
        //print
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                cout<<mat[k][l]<<" ";
            }
            cout<<"\n";
        }
            cout<<"\n";
        return true;
      }
    //recursive case
   for(int k=0;k<n;k++){
        if(canPlaceQueens(n,mat,i,k)){
            mat[i][k]=1;
           bool nextPossible=nqeen(n,mat,i+1);
           mat[i][k]=0;
        }
   }
   return false;
}
int main(){

  int n;
  int mat[100][100]={0};
  cin>>n;
  nqeen(n,mat,0);

return 0;
}
