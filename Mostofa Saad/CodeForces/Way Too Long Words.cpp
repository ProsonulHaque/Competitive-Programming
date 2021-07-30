/*
Author: rafa45
Date: 2 Oct 2020
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

    int n=0, i=0;

    cin >> n;

    vector<string> a;
    string s;

    for(i=0; i<n; i++){
        cin >> s;
        int len = s.size();
        if(len>10){
            s = s[0]+to_string(len-2)+s[len-1];
        }
        a.push_back(s);
    }

    for(i=0; i<n; i++)
        cout << a[i] << endl;

    return 0;
}
