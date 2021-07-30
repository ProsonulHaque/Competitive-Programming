/*
Author: rafa45
Date: 24 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y=0, w=0;

    cin >> y >> w;

    int d = 6-max(y,w)+1;

    int g = gcd(6, d);

    printf("%d/%d\n", d/g, 6/g);

    return 0;
}

