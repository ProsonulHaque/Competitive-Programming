/*
    ***************************
    *    Author: rafa45       *
    *    Date: 28 Jul 2021    *
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
        int n=0; cin >> n;
        unordered_map<ll, ll> mp;
        for(int i=0; i<n; i++){
            ll x; cin >> x;
            mp[x]++;
        }
        ll ans = 0;
        for(auto elem : mp){
            ans += min(elem.first-1, elem.second);
        }
        cout << ans << endl;
    }


    return 0;
}