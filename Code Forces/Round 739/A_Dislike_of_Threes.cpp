/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Aug 2021    *
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
        int k; cin >> k;

        int cnt = 1, ans = 1;

        for(int i=1; cnt<=k; i++){
            if(i%3==0 || i%10==3) continue;
            if(cnt==k) ans = i; cnt++;
        }

        cout << ans << endl;
    }


    return 0;
}