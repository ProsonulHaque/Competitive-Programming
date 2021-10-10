#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll modEx(ll b, ll e, ll m){
    ll res = 1;
    while(e>0){
        if(e&1) res = (res*b) % m;
        b = (b*b) % m;
        e >>= 1;
    }
    return res;
}
int main()
{
    IOS int tc; cin >> tc;
    while(tc--){
        ll a, b; cin >> a >> b;
        cout << modEx(a, b, 10) << endl;
    }
    return 0;
}