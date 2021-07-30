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

int main()
{
    int t, a, b;
    cin>>t;

    while(t--){
        cin >> a >> b;
        int d = abs(a-b);
        int ans = d/10;
        if(d%10) ans++;
        cout << ans << endl;
    }

    return 0;
}
