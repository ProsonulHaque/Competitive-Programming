/*
Author: rafa45
Date: 9 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int n, m, c;

    while(cin >> n >> m >> c && n!=0){
        int ans = ((n-7)*(m-7)+c)/2;
        cout << ans << endl;
    }

    return 0;
}
