/*
Author: rafa45
Date: 25 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int t, n, i;
    vector<int> a(6);
    for(auto &x:a) cin >> x;
    cin >> n;
    vector<int> b(n);
    for(auto &x:b) cin >> x;

    ll maxA = *max_element(a.begin(), a.end());
    ll minA = *min_element(a.begin(), a.end());
    ll maxB = *max_element(b.begin(), b.end());
    ll minB = *min_element(b.begin(), b.end());

    ll ans = min(abs((maxB-maxA)-(minB-minA)), abs((maxB-minA)-(minB-maxA)));

    cout << ans << endl;
    return 0;
}

