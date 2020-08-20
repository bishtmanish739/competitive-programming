#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string s) {

  vector<int> v;

    stringstream ss(s);

    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        int i= stoi(substr);
        v.push_back(i);
    }

   return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
