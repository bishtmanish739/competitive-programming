#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        string initialstring;
        cin>>initialstring;
        int finalans=0;
        int totalmagnet=0;
        vector<int>iindex;
        vector<int> mindex;
        vector<int > sheettill;
        vector<int > wallIndex;
        int lastwallindex=0;
        bool *visitedarr=new bool[n+1];
        int currsheet=0;
       for(int i=0;i<n;i++){
            visitedarr[i]=false;
            if(initialstring[i]=='X'){
                vector<int>emptyvector;
            iindex=emptyvector;
            mindex=emptyvector;
            currsheet=0;
           // cout<<mindex.size()<<endl;




            }
            if(initialstring[i]=='M'){
                mindex.push_back(i);
            }
            if(initialstring[i]=='I'){
                iindex.push_back(i);

            }
            if(initialstring[i]==':'){
                currsheet++;
               sheettill.push_back(currsheet);
            }
            else{
                sheettill.push_back(currsheet);
            }
            if(iindex.size()>0&&mindex.size()>0){
                int currpower=k+1;

                if(initialstring[i]=='I'){
                        for(int j=0;j<mindex.size();j++){
                            currpower=k+1;
                     currpower-=abs(i-mindex[j]);
                    currpower=currpower-(sheettill[i]-sheettill[mindex[j]]);
                     if(currpower>0){
                        finalans++;
                        mindex.erase(mindex.begin()+j);
                        iindex.erase(iindex.begin()+iindex.size()-1);


                        break;
                     }
                    }
                }
                if(initialstring[i]=='M'){
                        for(int j=0;j<iindex.size();j++){
                            currpower=k+1;
                     currpower-=abs(i-iindex[j]);
                     currpower=currpower-(sheettill[i]-sheettill[iindex[j]]);
                     if(currpower>0){
                        finalans++;
                        mindex.erase(mindex.begin()+mindex.size()-1);
                        iindex.erase(iindex.begin()+j);


                        break;
                     }
                    }

                }



            }

           }
        cout<<finalans<<endl;

    }

return 0;
}
