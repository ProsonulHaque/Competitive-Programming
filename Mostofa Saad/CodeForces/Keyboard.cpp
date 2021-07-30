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
    int n, i, j;
    char d;
    string s, ans;
    cin >> d >> s;
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";

    for(i=0; i<s.size(); i++){
        for(j=0; j<key.size(); j++){
            if(s[i]==key[j]){
                if(d=='R') ans += key[j-1];
                else ans += key[j+1];
            }
        }
    }

    cout << ans;

    return 0;
}

