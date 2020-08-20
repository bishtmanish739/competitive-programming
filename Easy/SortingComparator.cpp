
#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

//link-https://www.hackerrank.com/challenges/ctci-comparator-sorting/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

struct Player {
    int score;
    string name;
};

class Checker{
public:
  	// complete this method
    static int comparator(Player a, Player b)  {

        if(a.score>b.score){
            return 1;
        }
        if(a.score<b.score){
            return -1;
        }
        if(a.score==b.score){
            string aname=a.name;
            string bname=b.name;
            int i=0;
            while(aname[i]!=NULL){

                if(aname[i]>bname[i]){
                    return -1;
                }
                 if(aname[i]<bname[i]){
                    return 1;
                }

                i++;
            }
            return 1;
        }
    return 1;
    }
};




bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }
    sort(players.begin(), players.end(), compare);
    for(int i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}
