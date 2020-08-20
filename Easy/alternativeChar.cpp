#include <bits/stdc++.h>

using namespace std;

//link-https://www.hackerrank.com/challenges/alternating-characters/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s,int initail,int curr) {

    for(int i=0;i<s.length();i++){
        if(i<(s.length()-1)&&s[i]==s[i+1]){
            curr++;

        }

    }
    return curr;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s,0,0);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

