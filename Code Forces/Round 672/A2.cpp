/*
Author: rafa45
Date: 24 Sep 2020
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

    int t;

    cin >> t;

    while(t--){
        int n=0, i=0;

        cin >> n;

        int arr[n];

        for(i=0; i<n; i++)  cin >> arr[i];

        bool decreasing = true;

        for(i=0; i<n-1; i++){
            decreasing &= arr[i]>arr[i+1];
        }

        cout << (decreasing ? "NO":"YES") << endl;
    }

    return 0;
}
