/*
    ***************************
    *    Author: rafa45       *
    *    Date: 01 Sep 2021    *
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


    string a, b, c;
    cin >> a >> b >> c;

    unordered_map<char, int> mp1, mp2;

    for(char ch:a) mp1[ch]++;
    for(char ch:b) mp1[ch]++;
    for(char ch:c) mp2[ch]++;

    string ans = "YES";

    if(mp1.size() != mp2.size()) ans = "NO";
    else
        for(auto elem:mp1){
            if(elem.second != mp2[elem.first])
                ans = "NO";
        }

    cout << ans;

    return 0;
}