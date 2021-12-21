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

    int d = (t[0]-s[0]+26)%26;

    string s2 = s;

    for(int i=0; (int)i<s.size(); i++){
        s2[i] = 'a' + ((s2[i]-'a')+d)%26;
    }

    if(s2 == t) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}