/*
    ***************************
    *    Author: rafa45       *
    *    Date: 29 Jul 2021    *
    ***************************
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


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        ll n, k; cin >> n >> k;

        vector<ll> a(n), b(n);
        unordered_map<ll, vector<ll>> mp;

        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        
        iota(b.begin(), b.end(), 0);
        sort(b.begin(), b.end(), [&](ll i, ll j){return a[i]<a[j];});

        ll ans = -INF;

        for(int c=1; c<n; c++){
            ll i = b[c-1], j = b[c];
            ll t = (i+1ll)*(j+1ll)-k*(a[i]|a[j]);
            ans = max(ans, t);
        }

        cout << ans << endl;
    }


    return 0;
}