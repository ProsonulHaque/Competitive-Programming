/*
Author: rafa45
Date: 26 Sep 2020
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

    int n=0, t=0, k=0, d=0, cake=0, time=0;

    cin >> n >> t >> k >> d;

    if(n<=k){
        cout << "NO" << endl;
        return 0;
    }

    while(cake<n){
        cake += k;
        time += t;
    }

    if(time<=t+d){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    return 0;
}
