/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Sep 2021    *
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

        int ans = 0, cnt = 0;

        for(int i=0; i<n; i++){
            int d = s[i]-'0';
            ans += d;
            if(d>0 && i!=n-1) ans += 1;
        }

        cout << ans << endl;
    }


    return 0;
}