#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[101][101]={0};
        arr[0][n-1]=1;
        arr[n-1][0]=1;
        for(int i=0;i<n;i++){
                 int j=i;
                arr[i][j]=1;
                if(j+1<n){
                    arr[i][j+1]=1;;
                }
                if(j-1>=0){
                    arr[i][j-1]=1;;
                }


        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

