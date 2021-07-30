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

    ll i=0, a=0, b=0, c=0, d=0;

    cin >> a >> b >> c >> d;


    if(b<c || d<a){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}

