/*
Author: rafa45
Date: 13 Jul 2021
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class OptimalGolf
{
public:
    int minStrokes(int D, vector <int> clubLo, vector <int> clubHi){
        int n = clubLo.size();
        int ans = 1e9+7;
        for(int i=0; i<n; i++){
            if(D>=clubLo[i] && D<=clubHi[i]){
                ans = 1;
                break;
            }
            if(D>clubHi[i]){
                if(D%clubHi[i] == 0)
                    ans = min(ans, D/clubHi[i]);
                else
                    ans = min(ans, D/clubHi[i]+1);
            }
            else
                ans = min(ans, 2);
        }
        return ans;
    }
};


int main()
{
    IOS


    OptimalGolf g;
    int d = 3;
    vector<int> lo = {7};
    vector<int> hi = {100};

    cout << g.minStrokes(d, lo, hi) << endl;


    return 0;
}