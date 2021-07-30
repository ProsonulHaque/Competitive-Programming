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

    int i=0, n=0, m=0;

    cin >> n >> m;

    int arr[m][2];

    for(i=0; i<m; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    cout << n-1-m << endl;

    return 0;
}
