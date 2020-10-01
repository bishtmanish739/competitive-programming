#include <bits/stdc++.h>
using namespace std;
//link->https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/rank-list/editorial/
struct myDataType{
    string name;
    int scholarNo;
    int marks;
};
bool cmp(myDataType lhs, myDataType rhs){
    if (lhs.marks > rhs.marks){
        return true;
    }
    else if(lhs.marks == rhs.marks){
        if (lhs.name < rhs.name ){
            return true;
        }
        else if(lhs.name == rhs.name){
            return lhs.scholarNo < rhs.scholarNo;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main(){
    int n,marks,scholarNo;
    string s;
    cin>>n;
    vector <myDataType> v;
    myDataType temp;
    for(int i=0;i<n;i++){
        cin>>s>>scholarNo>>marks;
        temp.name = s;
        temp.scholarNo = scholarNo;
        temp.marks = marks;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].name<<" "<<v[i].scholarNo<<" "<<v[i].marks<<endl;
    }
    return 0;
}
