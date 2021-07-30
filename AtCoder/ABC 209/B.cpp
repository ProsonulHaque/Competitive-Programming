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

    int n, x, sum = 0;
    cin >> n >> x;

    for(int i=1; i<=n; i++){
        int p;
        cin >> p;
        if(i%2 == 0) sum += p-1;
        else sum += p;
    } 

    if(sum <= x) cout << "Yes";
    else cout << "No";

    return 0;
}