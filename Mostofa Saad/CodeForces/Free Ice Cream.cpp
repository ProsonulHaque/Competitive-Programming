/*
Author: rafa45
Date: 4 Oct 2020
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

    int i=0, n=0, d=0;
    ll total=0, x=0;
    char sign;

    cin >> n >> x;

    total = x;

    for(i=0; i<n; i++){
        cin >> sign >> x;
        if(sign=='+'){
            total += x;
        }
        else{
            if(x<=total){
                total -= x;
            }
            else{
                d++;
            }
        }
    }

    cout << total << " " << d << endl;

    return 0;
}
