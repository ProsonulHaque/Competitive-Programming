/*
    ***************************
    *    Author: rafa45       *
    *    Date: 29 Aug 2021    *
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
        int c, d; cin >> c >> d;
        int ans = 0;

        if((c+d)%2) ans = -1;
        else if(c==0 && d==0) ans = 0;
        else if(c==d) ans = 1;
        else ans = 2;

        cout << ans << endl;
    }


    return 0;
}