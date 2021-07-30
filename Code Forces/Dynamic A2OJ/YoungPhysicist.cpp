/*
Author: rafa45
Date: 22 Jul 2021
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

    int n = 0, i = 0, j = 0, k = 0;
    cin >> n;

    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
        i+=x; j+=y; k+=z;
    }

    if(i == 0 && j == 0 && k == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}