/*
    ***************************
    *    Author: rafa45       *
    *    Date: 19 Aug 2021    *
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


    int n;

    while(cin >> n){
        if(n==0) break;
        int sq = 0;

        for(int i=1; i<=n; i++) sq += (n-i+1) * (n-i+1);

        cout << sq << endl;
    }


    return 0;
}