/*
    ***************************
    *    Author: rafa45       *
    *    Date: 30 Jul 2021    *
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
        ll n; cin >> n;

        n = (n+1)/2;
        ll ans = max(1ll*15, n*5);
        
        cout << ans << endl;
    }


    return 0;
}