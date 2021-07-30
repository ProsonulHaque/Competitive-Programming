/*
Author: rafa45
Date: 24 Sep 2020
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

    set<int> s;
    int i=0, x=0;

    for(i=0; i<4; i++){
        cin >> x;
        s.insert(x);
    }

    cout << 4-s.size() << endl;

    return 0;
}
