/*
Author: rafa45
Date: 11 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    int n, i, j, x;

    cin >> n;
    set<int> s;

    for(i=0; i<MXN; i++){
        s.insert(i);
    }

    for(i=0; i<n; i++){
        cin >> x;
        s.erase(x);
        auto it = s.begin();
        cout << *it << endl;
    }

    return 0;
}
