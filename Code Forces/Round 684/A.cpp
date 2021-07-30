/*
Author: rafa45
Date: 17 Nov 2020
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

int main()
{
    IOS

    int t, n, c0, c1, h;
    string s;
    cin >> t;

    while(t--){
        cin >> n >> c0 >> c1 >> h;
        cin >> s;
        int ans = 0;

        rep(i, 0, n){
            int cost1 = 0;
            int cost2 = 0;

            if(s[i]=='0'){
                cost1 = c0;
                cost2 = h+c1;
                ans += min(cost1, cost2);
            }
            else{
                cost1 = c1;
                cost2 = h+c0;
                ans += min(cost1, cost2);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
