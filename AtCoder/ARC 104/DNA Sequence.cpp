/*
Author: rafa45
Date: 28 Sep 2020
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

    int n=0, i=0, k=0, l=0;
    int a=0, t=0, g=0, c=0;
    int cnt=0;
    string s, sub;

    cin >> n >> s;

    for(i=0; i<n-1; i++){
        l = 2;
        while(i+l<=n){
            a=0; t=0; g=0; c=0;
            sub = s.substr(i,l);
            for(k=0; k<sub.size(); k++){
                if(sub[k]=='A') a++;
                else if(sub[k]=='T') t++;
                else if(sub[k]=='G') g++;
                else c++;
            }
            if(a==t && g==c) cnt++;
            l+=2;
        }
    }

    cout << cnt << endl;

    return 0;
}
