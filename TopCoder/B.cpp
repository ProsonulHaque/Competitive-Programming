#include<bits/stdc++.h>
using namespace std;

#define endl              "\n"
#define ll                long long
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

class OverallScores{
public:
int findWinner(int N, int scores[]){
    int sz = sizeof(scores)/sizeof(scores[0]);
    int c = 0;
    vector<int> v(N);

    rep(i, 0, sz){
        v[c]+=scores[i];
        c++;
        if((i+1)%N==0)
            c=0;
    }

    int ans = 0;
    int maxV = v[0];
    rep(i, 1, N){
        if(v[i]>maxV){
            maxV = v[i];
            ans = i;
        }
    }

    return ans;
}
};

int main(){
    ColorWheel c;
    cout << c.describePair("Red", "Green");
}
