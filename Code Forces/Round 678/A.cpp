/*
Author: rafa45
Date: 24 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;
const ll maxll = (ll) 1e18;

int main()
{
    int t, i, x, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        ll sum = 0;
        for(i=0; i<n; i++){
            cin >> x;
            sum += x;
        }
        if(sum==m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
