/*
Author: rafa45
Date: 23 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define m 1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t=0, i=0, cnt=0, j=0, n=0;
    ll d1=0, d2=0, largest=0;

    cin >> t;

    for(j=1; j<=t; j++){
        cin >> n;

        ll arr[n];

        for(i=0; i<n; i++){
            cin >> arr[i];
        }

        largest=2;
        cnt=2;
        d1 = arr[0]-arr[1];

        for(i=1; i<n-1; i++){
            d2 = arr[i]-arr[i+1];

            if(d1==d2){
                cnt++;
            }

            else{
                d1 = d2;
                if(cnt>largest){
                    largest = cnt;
                }
                cnt = 2;
            }
        }
        if(cnt>largest){
            largest = cnt;
        }

        cout << "Case #" << j << ": " << largest << endl;
    }

    return 0;
}
