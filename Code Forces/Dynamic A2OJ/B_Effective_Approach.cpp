/*
    ***************************
    *    Author: rafa45       *
    *    Date: 05 Sep 2021    *
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
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int n; cin >> n;

    unordered_map<int, int> pos;

    for(int i=1; i<=n; i++){
        int x; cin >> x;
        pos[x] = i;
    }

    int q; cin >> q;
    ll a = 0, b=0;

    while(q--){
        int x; cin >> x;
        a += pos[x];
        b += n-pos[x]+1;
    }

    cout << a << " " << b << endl;

    return 0;
}