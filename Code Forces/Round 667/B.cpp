/*
Author: rafa45
Date: 21 Oct 2020
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
    ll t, a, b, x, y, n;
    cin>>t;

    while(t--){
        cin >> a >> b >> x >> y >> n;

        ll ans[4]={maxll, maxll, maxll, maxll};

        if(a-n>=x) ans[0] = (a-n)*b;

        if(b-n>=y) ans[1] = a*(b-n);

        if(a-x<n){
           if((b-(n-(a-x)))>=y) ans[2] = x*(b-(n-(a-x)));
           else ans[2] = x*y;
        }

        if(b-y<n){
            if(a-(n-(b-y))>=x) ans[3] = y*(a-(n-(b-y)));
            else ans[3] = y*x;
        }

        cout << min({ans[0], ans[1], ans[2], ans[3]}) << endl;
    }

    return 0;
}
