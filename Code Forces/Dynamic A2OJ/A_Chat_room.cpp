/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Nov 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS

    string str, out = "hello";
    cin >> str;

    int l=0, r=0;

    for(; r<str.length(); r++){
        if(out[l] == str[r]) l++;
    }

    if(l == 5) cout << "YES";
    else cout << "NO";

    return 0;
}