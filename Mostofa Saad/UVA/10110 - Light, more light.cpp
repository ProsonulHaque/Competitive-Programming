/*
Author: rafa45
Date: 4 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, root=0;

    while(cin >> n && n!=0){
        root = sqrt(n);
        cout << (root*root==n? "yes\n":"no\n");
    }

    return 0;
}
