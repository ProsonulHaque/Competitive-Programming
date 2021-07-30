/*
Author: rafa45
Date: 23 Jul 2021
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        string s; cin >> s;
        vector<int> alp(26, 0);
        for(char ch:s) alp[ch-'a'] += 1;
        int extra = 0;
        for(int val:alp) if(val>2) extra+=val-2;
        cout << (s.length()-extra)/2 << endl;
    }


    return 0;
}