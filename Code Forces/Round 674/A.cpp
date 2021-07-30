/*
Author: rafa45
Date: 28 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=0, n=0;

    cin >> t;

    while(t--){
        cin >> n;

        int x=1;
        while(x*x<n){
            x++;
        }

        int ans = x-1+(n-x+(x-1))/x;

        cout << ans << endl;
    }

    return 0;
}
