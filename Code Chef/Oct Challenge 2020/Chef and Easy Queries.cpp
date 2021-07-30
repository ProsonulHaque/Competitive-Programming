/*
Author: rafa45
Date: 2 Oct 2020
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

    int t=0;
    ll n=0, k=0, i=0;

    cin >> t;

    while(t--){
        cin >> n >> k;
        vector<int> a(n);
        for(i=0; i<n; i++)
            cin >> a[i];
        ll q = 0, day=0;
        for(i=0; i<n; i++){
            q += a[i];
            if(q<k){
                cout << i+1 << endl;
                q = 0;
                break;
            }
            else{
                q -= k;
            }
        }
        if(q>=k){
            day = q/k;
            i += day+1;
            cout << i << endl;
        }
    }

    return 0;
}
