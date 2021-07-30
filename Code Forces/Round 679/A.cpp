/*
Author: rafa45
Date: 25 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(i=0; i<n; i++) cin >> a[i];

        for(i=(n+1)/2; i<n; i++){
            cout << a[i] << " ";
        }

        for(i=0; i<(n+1)/2; i++){
            cout << -a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

