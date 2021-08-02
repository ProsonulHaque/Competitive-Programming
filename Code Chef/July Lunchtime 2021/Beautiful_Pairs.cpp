/*
    ***************************
    *    Author: rafa45       *
    *    Date: 31 Jul 2021    *
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
        ll n=0; cin >> n;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        ll ans = n*(n-1);
        for(auto el:mp){
            if(el.second>1) ans -= 1ll*el.second*(el.second-1);
        }
        cout << ans << endl;
    }


    return 0;
}