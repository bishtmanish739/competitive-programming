#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	int n,a[100],b[100][100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
     for(int i=0;i<n;i++){
     	for(int j=0;j<n;j++){
     		if(i>j)
     			b[i][j]=0;
     		else if(i==j){
     			b[i][j]=a[i]*n;
     		}
     	}
     }
     //Move diagnonally
     for(int k=1;k<n;k++){

     	 int c=k;
     	for(int d=0;d<n;d++){
     	int y;
     	if(d==0||c==0){
     	 y=(n-(d+c));
     	}
     	else{
     	   y=n-(n-(d+c-1));
     	  }
     	   b[d][c]=max(b[d][c-1]+y*a[c],b[d+1][c]+y*a[d]);
           c++;
     	}
     }

cout<<b[0][n-1];
	return 0;
}
