/*
Author: rafa45
Date: 10 Jul 2021
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

    int n, t; cin >> n >> t;
    string ans;

    if(t == 10){
        if(n==1) ans = "-1";
        else{
            ans = "1";
            for(int i=0; i<n-1; i++) ans += "0";
        } 
    }
    else{
        for(int i=0; i<n; i++) ans += to_string(t);
    }
    
    cout << ans << endl;

    return 0;
}