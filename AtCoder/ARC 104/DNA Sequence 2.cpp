/*
Author: rafa45
Date: 3 Oct 2020
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

    int i=0, j=0, n=0;
    int c1=0, c2=0, cnt=0;
    string s, sub;

    cin >> n >> s;

    for(i=0; i<n-1; i++){
        c1=0; c2=0;
        for(j=i; j<n; j++){
            if(s[j]=='A') c1++;
            else if(s[j]=='T') c1--;
            else if(s[j]=='C') c2++;
            else c2--;
            if(c1==0 && c2==0) cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
