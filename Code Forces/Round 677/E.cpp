/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    int i, n, r;

    cin >> n;

    r = n/2;

    ll fn = 1, fr = 1, fnr = 1;

    for(i=1; i<=n; i++){
        fn *= i;
    }

    for(i=1; i<=r; i++){
        fr *= i;
    }

    for(i=1; i<=n-r; i++){
        fnr *= i;
    }

    ll ans = (fn/(fr*fnr*2)) * (fr/r) * (fr/r);

    cout << ans << endl;

    return 0;
}
