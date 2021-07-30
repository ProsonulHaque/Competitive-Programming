/*
Author: rafa45
Date: 27 Sep 2020
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

    int test;

    cin >> test;

    while(test--){
        int i=0; ll x=0;
        int n=0, t=0, color=0;

        cin >> n >> t;

        for(i=0; i<n; i++){
            cin >> x;
            if(2*x==t){
                cout << color << " ";
                color ^= 1;
            }
            else if(2*x<t){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
