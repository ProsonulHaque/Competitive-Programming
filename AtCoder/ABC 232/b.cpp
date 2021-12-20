/*
    ***************************
    *    Author: rafa45       *
    *    Date: 19 Dec 2021    *
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


    string s, t;
    cin >> s >> t;
    
    bool ok = true;
    int d = (s[0]-'a') < (t[0]-'a') ? (t[0]-'a')-(s[0]-'a') : 26-((s[0]-'a')-(t[0]-'a'));

    for(int i=1; i<s.length(); i++){
        int dp = (s[i]-'a') < (t[i]-'a') ? (t[i]-'a')-(s[i]-'a') : 26-((s[i]-'a')-(t[i]-'a'));
        if(dp != d) ok = false;
    }

    if(ok) cout << "YES";
    else cout << "NO";


    return 0;
}