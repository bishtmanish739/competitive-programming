
#include<bits/stdc++.h>
using namespace std;
int main(){
    int length=20;
    int width=5;
    int space=length-2;

    for(int j=0;j<width;j++){
                for(int i=0;i<length;i++){
                        if(j==0||j==width-1){
                                cout<<"*";

                        }
                        else{
                            if(i==0||i==length-1){
                                cout<<"*";
                            }
                            else{
                                cout<<" ";
                            }
                        }

        }
        cout<<endl;

    }


return 0;
}
