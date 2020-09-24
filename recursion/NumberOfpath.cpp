#include <iostream>
using namespace std;
int solution(int i,int j,int m,int n){
    if(i>=m||j>=n){
        return 0;
    }
    if(i==m-1&&j==n-1){
        return 1;
    }
    return solution(i+1,j,m,n)+solution(i,j+1,m,n);

}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int n;
	    cin>>n;

	   // int **arr=new int*[m];
	    cout<<solution(0,0,m,n)<<endl;
	}
	return 0;
}
