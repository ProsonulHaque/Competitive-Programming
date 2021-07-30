/*
Author: rafa45
Date: 26 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 998244353

char conv(int c){
    if(c==0) return '0';
    else if(c==1) return '1';
    else if(c==2) return '2';
    else if(c==3) return '3';
    else if(c==4) return '4';
    else if(c==5) return '5';
    else if(c==6) return '6';
    else if(c==7) return '7';
    else if(c==8) return '8';
    else return '9';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, q=0, i=0, l=0, r=0, num=0;
    int d=0;

    cin >> n >> q;

    if(n>9) n=9;

    string s="";

    for(i=0; i<n; i++){
        s += '1';
    }

    while(q--)
    {
        cin >> l >> r >> d;

        char ch = conv(d);

        for(i=l-1; i<=r-1; i++){
            s[i] = ch;
        }

        num = stoll(s);

        cout << num << endl;
    }

    return 0;
}

