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

    int j=0, i=0;
    string s, t;

    cin >> s >> t;

    while(i<t.size()){
        if(t[i]==s[j]){
            j++;
        }
        i++;
    }

    cout << j+1 << endl;

    return 0;
}
