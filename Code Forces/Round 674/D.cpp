/*
Author: rafa45
Date: 28 Sep 2020
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

    int i=0, j=0, n=0;
    ll sum=0, cnt=0;

    cin >> n;

    ll arr[n];

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    set<ll> s={0};

    for(i=0; i<n;){
        sum += arr[i];
        if(s.count(sum)){
            cnt++;
            sum = 0;
            s.clear();
            s.insert(0);
        }
        else{
            s.insert(sum);
            i++;
        }
    }

    cout << cnt << endl;

    return 0;
}
