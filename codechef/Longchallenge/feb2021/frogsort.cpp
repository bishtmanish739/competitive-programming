#include <bits/stdc++.h>
using namespace std;
#define int long long int 
#define endl '\n'
#define MOD 1000000007
vector<int > primeSeive(int n){
    bool visited[n+1]; 
    memset( visited, true, sizeof( visited)); 
    //initially mark as all number till n are prime number
  
    for (int p=2; p*p<=n; p++) 
    { 
     
        if (visited[p] == true) 
        { 
           
            for (int i=p*p; i<=n; i += p) 
               visited[i] = false; 
        } 
    } 
  //now add those element in a vector which are marked as true
    vector<int > primeNumber;
    for (int p=2; p<=n; p++) {
         if (visited[p]) {
           primeNumber.push_back(p);
       }

    }
    return primeNumber;
      
         
}
void TestCase(){
    int n;
    cin>>n;
    map<int, int > originalPosition;
    map<int ,int > jump;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        originalPosition[k]=i+1;
    }
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        jump[i+1]=k;
    }
    int p=0;
    int prev=-1;
    int step=0;
     for (auto i : originalPosition) {
         
       
        if(p>0){
            // cout << i.first << "   " << i.second<<p<< endl;
            if(i.second<=prev){
                int z=i.second;
                int inc=jump[i.second];
              //  cout<<inc<<" inc"<<prev<<endl;;
                //cout<<z<<" "<<prev<<" "<<inc<<endl;
                while(!(z>prev)){
                    z+=inc;
                    step++;

                }
                prev=z;

            }
            else{
                prev=i.second;
            }
        }
        else{
                 prev=i.second;
            }
       

        p++;

     }
     cout<<step<<endl;
        

}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        TestCase();
    }
   
    
    
   
   

  return 0;  
}
