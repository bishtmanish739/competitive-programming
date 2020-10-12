#include <bits/stdc++.h>
using namespace std;
//link->https://www.codechef.com/OCT20B/problems/REPLESX/
#define int long long int
int solution(vector<int> &v,int x,int p,int k){
     if(v[p]==x){
                return 0;


            }
    int count=0;
    if(k>p){
        while(true){
            if(v[p]<x){
                return -1;

            }
            if(v[p]>x){
                int ans=0;
                int i=p;
                while(i>=0&&v[i]>x){
                    i--;
                    ans++;
                }
                return ans;


            }


        }

    }
    if(k<p){
        while(true){
             if(v[p]<x){
                 int ans=0;
                 int i=p;
                 while(i<=v.size()-1&&v[i]<x){
                     i++;
                     ans++;
                 }
                 return ans;

            }
            if(v[p]>x){
                return -1;

            }


        }

    }
    if(k==p){
        while(true){
             if(v[p]>x){
                 int ans=0;
                 int i=p;

                 while(i>=0&&v[i]>x){
                     ans++;
                     i--;
                 }
                 return ans;

            }
             if(v[p]<x){
                 int ans=0;
                 int i=p;

                 while(i<=v.size()-1&&v[i]<x){
                     ans++;
                     i++;
                 }
                 return ans;

            }



        }

    }
    return count;
}

int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x;
	    cin>>x;
	    int p;
	    cin>>p;
	    int k;
	    cin>>k;
	   vector<int> v ;
	    for(int i=0;i<n;i++){
	        int l;
	        cin>>l;
	        v.push_back(l);
	    }
	    sort(v.begin(),v.end());
	    p=p-1;
	    k=k-1;
	    cout<<solution(v,x,p,k)<<endl;;


	}
	return 0;
}

