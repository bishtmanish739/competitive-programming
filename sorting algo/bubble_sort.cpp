#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int step=0;
    // Write Your Code Here
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                step++;

            }
        }
    }
    cout<<"Array is sorted in "<<step<<" swaps."<<endl;
  cout<<"First Element: "<<a[0]<<endl;
   cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}

