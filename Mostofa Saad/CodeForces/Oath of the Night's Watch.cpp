/*
Author: rafa45
Date: 16 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int i, n, cnt=0;
    cin >> n;
    vector<int> a(n);
    for(i=0; i<n; i++) cin >> a[i];
    int maxV = *max_element(a.begin(), a.end());
    int minV = *min_element(a.begin(), a.end());
    for(i=0; i<n; i++){
        if(a[i]<maxV && a[i]>minV) cnt++;
    }
    cout << cnt;
    return 0;
}
