/*
Author: rafa45
Date: 29 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int t;
    cin >> t;

    while(t--){
        int n, i, j, k, flag=0;
        cin >> n;
        ll a[n], ans;

        for(i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>=0) flag=1;
        }

        sort(a, a+n, [](ll x, ll y){return abs(x)>abs(y);});

        if(flag==0){
            ans = a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
            cout << ans << endl;
            continue;
        }

        ans = a[0]*a[1]*a[2]*a[3]*a[4];

        for(i=5; i<n; i++){
            for(j=0; j<5; j++){
                ll temp = a[i];
                for(k=0; k<5; k++){
                    if(k!=j) temp *= a[k];
                }
                ans = max(ans, temp);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
