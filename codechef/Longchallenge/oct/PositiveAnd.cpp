#include <bits/stdc++.h>
using namespace std;



int main()
{

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int * a=new int [n+1];
	    for(int i=1;i<n+1;i++){
	        a[i]=i;
	    }
	    int k=1;
	    if(n==1){
	        cout<<"1"<<endl;
	    }
	    else{
	       bool flag=true;
	            for(k=1;k<=n;k){
	                if(k==n){
        	                 flag=false;

        	             }
	                    int temp=a[k];
    	                 a[k]=a[k+1];
        	             a[k+1]=temp;
        	             k=k*2;

	            }
	            if(flag){
	                for(int i=1;i<=n;i++){
	                    cout<<a[i]<<" ";
	                }
	                cout<<endl;
	            }else{
	                cout<<"-1"<<endl;
	            }




    	   }

	    }







	return 0;
}
