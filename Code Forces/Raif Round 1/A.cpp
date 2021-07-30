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
    int t;
    ll x1, y1, x2, y2;
    cin >> t;

    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;
        ll ans = abs(x1-x2)+abs(y1-y2);
        if(y1!=y2 && x1!=x2) ans += 2;
        cout << ans << endl;
    }

    return 0;
}
