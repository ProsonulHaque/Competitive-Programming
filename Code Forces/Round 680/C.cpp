/*
Author: rafa45
Date: 2 Nov 2020
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

ll greatestX(ll i, ll p, ll q){
    if(i==1) return 1;

    while(p%q==0){
        p /= i;
    }

    return p;
}

int main()
{
    IOS

    ll t, i;
    ll p, q;

    cin >> t;

    while(t--){
        cin >> p >> q;

        if(p%q==0){
            ll ans=1;
            for(i=1; i*i<=q; i++){
                if(q%i==0){
                    ans = max(ans, greatestX(i, p, q));
                    ans = max(ans, greatestX(q/i, p, q));
                }
            }
            cout << ans << endl;
        }
        else{
            cout << p << endl;
        }
    }

    return 0;
}
