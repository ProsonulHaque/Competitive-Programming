/*
    ***************************
    *    Author: rafa45       *
    *    Date: 26 Jul 2021    *
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


    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    
    ll p = min(n,a);
    ll q = n-p;

    cout << p*x+q*y;


    return 0;
}