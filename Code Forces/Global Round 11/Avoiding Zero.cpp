/*
Author: rafa45
Date: 10 Oct 2020
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
        vector<int> a(n);

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        if(sum==0){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

        if(sum>0){
            sort(a.rbegin(), a.rend());
        }
        else{
            sort(a.begin(), a.end());
        }

        for(i=0; i<n; i++){
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
