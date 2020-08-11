#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

vector<string> split_string(string);

// Complete the superDigit function below.
int superDigit(string n, int k) {
    if(n.length()==1){
        return stoi(n);
    }
   unsigned long long int l=0;
    for(int i=0;i<n.length();i++){
        if(n[i]=='0'){
            l+=0;

        }
         if(n[i]=='1'){
             l+=1;

        }
         if(n[i]=='2'){
            l+=2;
        }
         if(n[i]=='3'){
             l+=3;

        }
         if(n[i]=='4'){
             l+=4;

        }
         if(n[i]=='5'){
             l+=5;

        }
         if(n[i]=='6'){
             l+=6;

        }
         if(n[i]=='7'){
             l+=7;

        }
         if(n[i]=='8'){
            l+=8;
        }
        if(n[i]=='9'){
            l+=9;
        }
    }
    l=l*k;
    string str= to_string(l);
  return   superDigit(str,1);



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    string n = nk[0];

    int k = stoi(nk[1]);

    int result = superDigit(n, k);

    cout << result << "\n";
    getch();

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

