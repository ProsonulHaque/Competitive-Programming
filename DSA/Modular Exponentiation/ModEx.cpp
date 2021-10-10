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

ll modEx(ll b, ll e, ll m){
    ll result = 1;

    for(int i=0; (1<<i)<=e; i++){
        if(e&(1<<i)){
            result = (result*b) % m;
        }

        b = (b*b) % m;        
    }

    return result;
}

int main()
{
    IOS

    int b = 10, e = 15, m = 1e9+7;
    cout << modEx(b, e, m);

    return 0;
}