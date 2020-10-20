#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int count=0;
        for(int i=1;i<=9;i++){
              int currdigit=i;
            if(currdigit==x){
                count++;
                cout<<count<<endl;
                break;
            }
            int digit=1;
            count++;
            bool ans=false;

            while(currdigit<=10000){

                currdigit=(currdigit*10)+i;
                if(currdigit>10000){
                    break;
                }
               // cout<<currdigit<<" ";

                digit+=1;
                //cout<<digit<<endl;
                count+=digit;
                if(currdigit==x){
                    ans=true;
                    break;

                }



            }
            if(ans){
                cout<<count<<endl;
                break;
            }

        }
    }
}

