/*
Author: rafa45
Date: 6 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int v=0, t=0;

    // v = u + at
    // d = ut + .5 a t^2

    while(scanf("%d %d", &v, &t)!=EOF){
        cout << 2*v*t << endl;
    }

    return 0;
}
