#include <iostream>
using namespace std;
bool flag=false;
void printpath(int out[10][10],int endrow,int endcol){
    for(int i=0;i<=endrow;i++){
        for(int j=0;j<=endcol;j++){
            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
bool issafe(char a[10][10],int i,int j,int endcol,int endrow){

    if(a[i][j]==(char)'O'){
        return true;
    }
    return false;
}
void RatChase(char a[10][10],int endrow,int endcol,int i,int j,int out[10][10]){
	if(flag){
		return;
	}
    if(i>endrow || j>endcol || i<0 || j<0 ){
        return;
    }
    if(i==endrow && j==endcol&&issafe(a,i,j,endrow ,endcol)){
        out[i][j]=1;
        flag=true;
        printpath(out,endrow,endcol);
		out[i][j]=0;

        return ;
    }
    if(!issafe(a,i,j,endrow,endcol)){

        return;
    }

    out[i][j]=1;
    RatChase(a,endrow,endcol,i,j+1,out);
    RatChase(a,endrow,endcol,i+1,j,out);

    out[i][j]=0;
    return;


}
int main() {
    int n,m;
    cin>>n>>m;
    char a[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int out[10][10]={0};
    RatChase(a,n-1,m-1,0,0,out);
    if(flag==false){
        cout<<"NO PATH FOUND";
    }
    return 0;

}

