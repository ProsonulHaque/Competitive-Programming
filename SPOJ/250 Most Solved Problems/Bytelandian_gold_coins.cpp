/*
    ***************************
    *    Author: rafa45       *
    *    Date: 27 Sep 2021    *
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

unordered_map<int, ll> dp;

ll f(int n){
    if(n == 0)
        return 0;
    if(dp.count(n)>0)
        return dp[n];

    dp[n] = max(1ll*n, f(n/2)+f(n/3)+f(n/4));

    return dp[n]; 
}


int main()
{
    IOS


    int n;

    while(cin >> n){
        dp.clear();
        cout << f(n) << endl;
    }


    return 0;
}