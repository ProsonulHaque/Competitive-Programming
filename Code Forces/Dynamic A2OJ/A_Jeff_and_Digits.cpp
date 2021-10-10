/*
    ***************************
    *    Author: rafa45       *
    *    Date: 12 Sep 2021    *
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


    int n; cin >> n;

    int fives = 0, zeroes = 0;

    for(int i=0; i<n; i++){
        int digit; cin >> digit;

        fives += (digit == 5);
        zeroes += (digit == 0);
    }

    string ans = "";
    
    if(zeroes<1) ans = "-1";
    else if(fives<9) ans = "0";
    else{
        for(int i=0; i<fives-fives%9; i++)
            ans += '5';

        for(int i=0; i<zeroes; i++)
            ans += '0';
    }
    
    cout << ans;


    return 0;
}