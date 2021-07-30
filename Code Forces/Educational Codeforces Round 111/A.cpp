/*
Author: rafa45
Date: 14 Jul 2021
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


    int t;
    cin >> t;


    while(t--){
        int s; cin >> s;
        int ans = 0;
        int sum = 0;
        int inc = 1;
        while(sum < s){
            sum += inc;
            inc += 2;
            ans += 1;
        }
        cout << ans << endl;
    }


    return 0;
}