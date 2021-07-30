/*
Author: rafa45
Date: 17 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int i, n, flag=1;
    bool rated=false;
    cin >> n;
    vector<int> a(n), b(n);

    for(i=0; i<n; i++){
        cin >> a[i] >> b[i];
        if(a[i]!=b[i]) rated=true;
        b[i] = a[i];
    }

    if(rated){
        cout << "rated";
        return 0;
    }

    sort(b.rbegin(), b.rend());
    bool unrated=false;

    for(i=0; i<n; i++){
        if(a[i]!=b[i]){
            unrated=true;
            break;
        }
    }

    unrated? cout << "unrated" : cout << "maybe";

    return 0;
}
