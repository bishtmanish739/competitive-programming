#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	map<int ,int > mymap;
	int max=0;
	int currans=0;
	for(int i=0;i<n;i++){
	    int k;
        cin>>k;
        if(mymap.find(k)==mymap.end()){
                mymap[k]++;
                currans++;
                max=max(currans,max);

        }
        else{
             mymap[k]--;
            currans--;


        }
	}

}

