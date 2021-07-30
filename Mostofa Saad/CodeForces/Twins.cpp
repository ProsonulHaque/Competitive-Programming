/*
Author: rafa45
Date: 16 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int n, i;
    int sum=0, total=0, coin=0;
    cin >> n;

    vector<int> a(n);

    for(i=0; i<n; i++){
        cin >> a[i];
        total += a[i];
    }

    sort(a.rbegin(), a.rend());

    for(i=0; i<n; i++){
        sum += a[i];
        total -= a[i];
        coin += 1;
        if(sum>total){
            cout << coin << endl;
            break;
        }
    }

    return 0;
}

