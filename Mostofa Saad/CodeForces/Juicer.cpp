/*
Author: rafa45
Date: 26 Sep 2020
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

    int n=0, b=0, d=0, i=0, cnt=0;
    ll sum=0;

    cin >> n >> b >> d;

    int orange[n];

    for(i=0; i<n; i++){
        cin >> orange[i];
    }

    for(i=0; i<n; i++){
        if(orange[i]<=b){
            sum += orange[i];
            if(sum>d){
                cnt += 1;
                sum = 0;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
