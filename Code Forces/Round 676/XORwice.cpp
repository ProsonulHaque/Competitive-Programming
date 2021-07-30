/*
Author: rafa45
Date: 18 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int i, t;
    ll a, b, x;

    cin >> t;

    while(t--){
        cin >> a >> b >> x;

        cout << (a^x)+(b^x) << endl;
    }
    return 0;
}
