#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int > v;
	map<int ,bool > mymap;
	int maxx=0;
	int currans=0;
	int j=0;
	for(int i=0;i<n;i++){
	    int k;
        cin>>k;
        v.push_back(k);
        if(mymap.find(k)==mymap.end()||mymap[k]==false){
                mymap[k]=true;
                currans++;
                maxx=max(currans,maxx);

        }
        else{
             while(v[j]!=k){
                    mymap[v[j]]=false;
                    j++;
             }
             //j++;
            // mymap[v[j]]=true;
             currans=(i-j);
             j++;


        }
	}
	cout<<maxx<<endl;

}

