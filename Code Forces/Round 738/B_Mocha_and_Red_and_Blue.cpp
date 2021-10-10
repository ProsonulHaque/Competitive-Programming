/*
    ***************************
    *    Author: rafa45       *
    *    Date: 15 Aug 2021    *
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


    int tc;
    cin >> tc;


    while(tc--){
        int n; cin >> n;
        string s; cin >> s;
        
        s += "S";
        int cnt = 0;

        for(int i=0; i<n; i++) cnt += (s[i] != '?'); 

        if(!cnt) s[0] = 'B';

        for(int i=0; i<n; i++)
            if(s[i]!='?' && s[i+1]=='?')
                s[i+1] = s[i]^('R'^'B');
        for(int i=n-1; i>0; i--)
            if(s[i]!='?' && s[i-1]=='?')
                s[i-1] = s[i]^('R'^'B');
        
        cout << s.substr(0, n) << endl;
    }


    return 0;
}