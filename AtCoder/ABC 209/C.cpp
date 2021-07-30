/*
Author: rafa45
Date: 10 Jul 2021
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS

    int n; cin >> n;
    ll seq = 1;
    vector<ll> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        seq *= v[i]-i;
        seq %= mod;
    }

    cout << seq;

    return 0;
}