/*
Author: rafa45
Date: 11 Dec 2020
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
int n=0, m=0;

bool valid(int x, int y){
    if(x >=0 && x<n && y >=0 && y<m)
        return true;
    return false;
}

int main()
{
    IOS

    int t;
    cin >> t;

    while(t--){
        int cnt=0;
        cin >> n >> m;
        string mat[n];

        rep(i, 0, n){
            cin >> mat[i];
        }

        rep(x, 0, n){
            rep(y, 0, m){
                if(mat[x][y]=='.')
                    continue;
                rep(i, 1, n-x+1){
                    if(!valid(x+i-1, y-i+1) || !valid(x+i-1, y+i-1) || mat[x+i-1][y-i+1]=='.' || mat[x+i-1][y+i-1]=='.')
                        break;
                    int flag=1;
                    rep(v, y-i+1, ((y+i-1)+1)){
                        if(!valid(x+i-1, v) || mat[x+i-1][v]=='.'){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag) cnt++;
                    else break;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
