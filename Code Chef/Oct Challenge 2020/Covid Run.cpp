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
    int n=0, k=0, x=0, y=0, i=0;

    cin >> t;

    while(t--){
        cin >> n >> k >> x >> y;

        int next = x;

        while(true){
            next = (next+k)%n;
            if(next==y){
                cout << "YES" << endl;
                break;
            }
            if(next==x){
                cout << "NO" << endl;
                break;
            }
        }
    }

    return 0;
}
