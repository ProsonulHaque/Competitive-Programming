/*
Author: rafa45
Date: 26 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int conv(char c){
    if(c=='0') return 0;
    else if(c=='1') return 1;
    else if(c=='2') return 2;
    else if(c=='3') return 3;
    else if(c=='4') return 4;
    else if(c=='5') return 5;
    else if(c=='6') return 6;
    else if(c=='7') return 7;
    else if(c=='8') return 8;
    else return 9;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i=0;
    ll sum = 0;
    string s;

    cin >> s;

    for(i=0; i<s.size(); i++){
        sum += conv(s[i]);
    }

    if(sum%9){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;
}
