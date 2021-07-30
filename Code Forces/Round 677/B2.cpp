/*
Author: rafa45
Date: 20 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;

int main()
{
    int t, i, n;
    cin>>t;

    while(t--){
        cin >> n;
        vector<int> a(n);
        for(auto &x:a) cin >> x;

        while(a.back()==0) a.pop_back();
        reverse(a.begin(), a.end());
        while(a.back()==0) a.pop_back();

        cout << count(a.begin(), a.end(), 0) << endl;
    }

    return 0;
}
