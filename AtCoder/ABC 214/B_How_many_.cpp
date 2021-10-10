/*
    ***************************
    *    Author: rafa45       *
    *    Date: 14 Aug 2021    *
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

    int s, t; cin >> s >> t;
    int ans = 0;

    for(int i=0; i<=100; i++)
        for(int j=0; j<=100; j++)
            for(int k=0; k<=100; k++){
                int add = i+j+k;
                int mul = i*j*k;
                ans += (add<=s && mul<=t);
            }
    
    cout << ans;

    return 0;
}