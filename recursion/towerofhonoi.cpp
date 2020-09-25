#include <iostream>
using namespace std;
int  solve(int n,string s,string helper,string dest,int &step){
    if(n==1){
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<dest<<endl;
        step++;
        return step;
    }

     solve(n-1,s,dest,helper,step);
      cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<dest<<endl;
      step++;
      solve(n-1,helper,s,dest,step);


   return step;





}

int main() {

	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s="1";
	    string dest="3";
	    string helper="2";
	    int step=0;
	    step=solve(n,s,helper,dest,step);
	    cout<<step<<endl;

	}
	return 0;
}

