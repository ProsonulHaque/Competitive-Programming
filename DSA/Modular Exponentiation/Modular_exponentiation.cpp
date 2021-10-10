/*
    ***************************
    *    Author: rafa45       *
    *    Date: 17 Aug 2021    *
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


ll power(ll x, ll y, ll M){
    ll res = 1;
    x %= M;

    while(y>0){
        if(y&1) res = (res*x)%M;

        x = (x*x)%M;
        y >>= 1;
    }

    return res;
}


int main()
{
    IOS


    ll x, y, M; 
    
    cin >> x >> y;

    M = 1e9+7;

    ll xpy = power(x, y, M);

    printf("x^y = %I64d", xpy);


    return 0;
}