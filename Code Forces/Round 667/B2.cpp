/*
Author: rafa45
Date: 22 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int t, a, b, x, y, n;
    cin>>t;

    while(t--){
        cin >> a >> b >> x >> y >> n;
        ll ans = 1e18;

        for(int i=0; i<2; i++){
            int da = min(n, a-x);
            int db = min(n-da, b-y);

            ans = min(ans, (a-da)*1ll*(b-db));

            swap(a, b);
            swap(x, y);
        }

        cout << ans << endl;
    }

    return 0;
}
