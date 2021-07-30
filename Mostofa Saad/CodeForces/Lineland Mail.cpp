/*
Author: rafa45
Date: 15 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int n, i, maxV, minV;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++) cin >> a[i];

    for(i=0; i<n; i++){
        if(i==0){
            maxV = abs(a[0]-a[n-1]);
            minV = abs(a[0]-a[1]);
            cout << minV << " " << maxV << endl;
        }
        else if(i==n-1){
            maxV = abs(a[0]-a[n-1]);
            minV = abs(a[n-2]-a[n-1]);
            cout << minV << " " << maxV << endl;
        }
        else{
            maxV = max(abs(a[i]-a[0]), abs(a[i]-a[n-1]));
            minV = min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
            cout << minV << " " << maxV << endl;
        }
    }

    return 0;
}
