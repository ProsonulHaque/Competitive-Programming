/*
Author: rafa45
Date: 19 Nov 2020
*/

#include<bits/stdc++.h>
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define endl              "\n"
#define PRIME	          M
#define mod               M
#define ll                long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

class ColorWheel{
public:
string describePair(string color1, string color2){
vector<string> c = {"Red", "Orange", "Yellow", "Green", "Blue", "Purple"};
vector<string> c1 = {"Red", "Orange", "Yellow"};
vector<string> c2 = {"Green", "Blue", "Purple"};
int same=0, adj=0, comp=0;

if(color1==color2) return "Same";

rep(i, 0, 3){
    if(c1[i]==color1 && c2[i]==color2)
        return "Complementary";
}

rep(i, 0, 6){
    if(c[i]==color1){
        if(i>0 && i<5){
            if(c[i-1]==color2 || c[i+1]==color2)
                return "Adjacent";
        }
        if(i==0){
            if(c[5]==color2 || c[1]==color2)
                return "Adjacent";
        }
        if(i==5){
            if(c[4]==color2 || c[0]==color2)
                return "Adjacent";
        }
    }
}

return "None";
}
};

int main(){
    ColorWheel c;
    cout << c.describePair("Red", "Green");
}
