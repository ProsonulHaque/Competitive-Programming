/*
Author: rafa45
Date: 07 Jul 2021
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
        ll a, b; cin >> a >> b;
        if(a>b) swap(a, b);
        cout << b-a << " ";
        if(b==a) cout << 0 << endl;
        else{
            cout << min(a%(b-a), (b-a)-(a%(b-a))) << endl;
        }
    }


    return 0;
}