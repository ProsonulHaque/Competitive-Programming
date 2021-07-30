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
    int n, i, flag=1;
    string p;
    cin >> n >> p;

    int a[26];

    memset(a, 0, sizeof(a));

    for(i=0; i<n; i++){
        a[tolower(p[i])-'a']=1;
    }

    for(i=0; i<26; i++){
        if(a[i]==0){
            flag = 0;
            break;
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

