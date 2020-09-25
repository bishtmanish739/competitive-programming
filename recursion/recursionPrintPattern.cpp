#include <bits/stdc++.h>
using namespace std;
//link-> https://practice.geeksforgeeks.org/problems/print-pattern/0/?category[]=Recursion&difficulty[]=0&page=1&query=category[]Recursiondifficulty[]0page1
void printPattern(int n,int i,bool &check ){

   if(i==n){
       cout<<i<<endl;
       return;
   }
   cout<<i<<" ";
   if(i>0&&!check){
       i=i-5;



   }
   else{
       i=i+5;
       check=true;

   }
   printPattern(n,i,check);
    return ;

}
void PrintPattern(int m)
{
    if (m > 0)
    {
        cout << m << '\n';
        PrintPattern(m - 5);
    }

    cout << m << '\n';
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n<<" ";
        int i=0;
        if(n>0){
            i=n-5;

        }
        else{
            i=n+5;
        }
        bool check=false;
        //printPattern(n,i,check);
        PrintPattern(n);
    }
	return 0;
}
