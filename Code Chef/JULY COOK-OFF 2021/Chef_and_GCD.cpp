/*
    ***************************
    *    Author: rafa45       *
    *    Date: 28 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int x=0, y=0, ans=M; cin >> x >> y;
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                if(gcd(x+i, y+j)>1) ans = min(ans, i+j);
        cout << ans << endl;
    }


    return 0;
}