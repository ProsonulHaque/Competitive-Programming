/*
    ***************************
    *    Author: rafa45       *
    *    Date: 11 Aug 2021    *
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


    ll n; cin >> n;
    int cnt = 0;

    while(n>0){
        int digit = n%10;
        if(digit == 4 || digit == 7) cnt++;
        n /= 10;
    }

    if(cnt==4 || cnt==7) cout << "YES";
    else cout << "NO";


    return 0;
}