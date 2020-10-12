#include <iostream>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int k;
            cin>>k;
            int x;
            cin>>x;
            int p=x;
            int y;
            cin>>y;
            bool z=true;
            for(int i=x;i<=n;i){
                     if(i==y){
                    cout<<" YES"<<endl;
                    break;
                }
                    i=(i+k)%n;
                 if(i==p){
                    z==false;
                     break;
                 }

            }

            if(z==false){
                cout<<"NO"<<endl;
            }

        }
	return 0;
}

