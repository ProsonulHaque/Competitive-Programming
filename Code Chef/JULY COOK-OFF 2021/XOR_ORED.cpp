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
        ll sum=0, mx=0;
        vector<ll> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        
        for(int i=0; i<n; i++){
            sum |= v[i]^mx;
        }
        
        cout << mx << " " << sum << endl;
    }


    return 0;
}