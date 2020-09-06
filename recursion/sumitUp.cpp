#include<bits/stdc++.h>
using namespace std;
   map<string, bool> mymap;

void targetsum(int input[100],int output[100],int i,int o,int n,int s){
	//mai phle integer ko string mai convert karunga fir uss string ko
	//apne map ki key banaunga aur fir check karunga ki humne ye wala subset phle print
	//kiya hai ya nhi
	 int j;
   string key="";

    if(i==n){
        int sum=0;
        for(int k=0;k<o;k++){
            sum+=output[k];
			j=output[k];
		key+= to_string(j);
            //iss step mai maine key generate kiya hai
        }
        if(sum==s&&mymap[key]==false){
            for(int k=0;k<o;k++){
                cout<<output[k]<<" ";

            }
			mymap[key]=true;
            cout<<endl;


        }

         return ;
    }

    output[o]=input[i];
    targetsum(input,output,i+1,o+1,n,s);
    targetsum(input,output,i+1,o,n,s);
    return;




}

int main() {

    int n;
    cin>>n;


    int input[100]={0};
    int output[100]={0};
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int s;
    cin>>s;
    sort(input, input+n);



		targetsum(input,output,0,0,n,s);




	return 0;
}

