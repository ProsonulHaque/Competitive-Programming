/*
Author: rafa45
Date: 10 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int r, c, i, j, cnt=0;
    cin >> r >> c;
    string s[r];

    for(i=0; i<r; i++){
        cin >> s[i];
    }

    for(i=0; i<r; i++){
        for(j=0; j<c-1; j++){
            if(s[i][j]=='.' && s[i][j+1]=='.') cnt++;
        }
    }

    for(i=0; i<c; i++){
        for(j=0; j<r-1; j++){
            if(s[j][i]=='.' && s[j+1][i]=='.') cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
