/*
Author: rafa45
Date: 4 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t=0, a=0, b=0, c=0;

    cin >> t;

    while(t--){
        cin >> a >> b >> c;
        cout << max({a, b, c}) << endl;
    }

    return 0;
}
