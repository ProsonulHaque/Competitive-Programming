/*
    ***************************
    *    Author: rafa45       *
    *    Date: 17 Aug 2021    *
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


int power(int x, int y){
    int res = 1;

    while(y>0){
        if(y&1) res *= x;

        x *= x;
        y >>= 1;
    }

    return res;
}


int main()
{
    IOS


    int x, y; cin >> x >> y;

    int xpy = power(x, y);

    printf("x^y = %d", xpy);


    return 0;
}