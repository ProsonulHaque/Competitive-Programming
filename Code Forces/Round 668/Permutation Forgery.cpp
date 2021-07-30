/*
Author: rafa45
Date: 1 Oct 2020
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

    int t=0, n=0, i=0;

    cin >> t;

    while(t--){
        cin >> n;
        vector<int> a(n);

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=n-1; i>=0; i--){
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
