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
        vector<int> a(n), b;

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n-1; i+=2){
            if(a[i]==a[i+1]){
                b.push_back(a[i]);
                b.push_back(a[i+1]);
            }
            else{
                b.push_back(0);
            }
        }

        cout << b.size() << endl;

        for(auto x : b){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
