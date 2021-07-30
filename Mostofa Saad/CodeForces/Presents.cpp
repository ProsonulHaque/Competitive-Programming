/*
Author: rafa45
Date: 14 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int n, i, x;
    cin >> n;
    int a[n];
    for(i=1; i<=n; i++){
        cin >> x;
        a[x-1]=i;
    }
    for(i=0; i<n; i++) printf("%d ", a[i]);

    return 0;
}
