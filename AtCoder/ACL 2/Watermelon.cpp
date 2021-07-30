/*
Author: rafa45
Date: 26 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 998244353

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=0, n=0, i=0, x=0;

    cin >> t;

    while(t--)
    {
        cin >> n;

        int flag = 1;

        for(i=1; i<=n; i++){
            cin >> x;
            if(i%x){
                flag=0;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

