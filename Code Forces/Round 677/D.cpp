/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    int t, i, n, j;
    cin>>t;

    while(t--){
        cin >> n;
        vector<int> a(n);
        for(auto &x:a) cin >> x;

        int cnt = 1;

        for(i=1; i<n; i++){
            if(a[i]==a[0]) cnt++;
        }

        if(cnt==n){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for(i=1; i<n; i++){
            for(j=0; j<n; j++){
                if(a[i]!=a[j]){
                    cout << i+1 << " " << j+1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
