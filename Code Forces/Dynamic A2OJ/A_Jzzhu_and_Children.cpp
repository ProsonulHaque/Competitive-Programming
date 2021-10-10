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


    int n, m; cin >> n >> m;

    int mx = 0, last = 0;

    for(int i=1; i<=n; i++){
        int x; cin >> x;
        int d = x/m + (x%m != 0);
        if(d>=mx){
            mx = d;
            last = i; 
        }
    }

    cout << last;

    return 0;
}