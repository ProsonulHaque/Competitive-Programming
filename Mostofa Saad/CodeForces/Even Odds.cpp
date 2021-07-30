/*
Author: rafa45
Date: 17 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    ll n, k, even, odd, ans;

    cin >> n >> k;

    even = n/2;
    odd = (n+1)/2;

    if(k<=odd) {
        ans = k*2-1;
    }
    else{
        k -= odd;
        ans = k*2;
    }

    cout << ans;

    return 0;
}

