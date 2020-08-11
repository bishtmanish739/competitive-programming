#include <bits/stdc++.h>
#include<conio.h>

using namespace std;
int arr[40]={0};

// Complete the stepPerms function below.
int stepPerms(int n) {
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;

    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    if(arr[n]!=0){
        return arr[n];
    }

   long long int j=stepPerms(n-1)+stepPerms(n-2)+stepPerms(n-3);
   arr[n]=j;
      return (j)%10000000007;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << endl;

    }
    getch();

    fout.close();

    return 0;
}

