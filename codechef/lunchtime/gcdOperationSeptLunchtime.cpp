#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *b=new int [n+1];
        b[0]=0;
        for(int i=1;i<n+1;i++){
            cin>>b[i];
        }
        bool check=true;
        for(int i=1;i<n+1;i++){
            if(i%b[i]!=0){
                check=false;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
         else{
            cout<<"NO"<<endl;
        }


        }
	return 0;
}
