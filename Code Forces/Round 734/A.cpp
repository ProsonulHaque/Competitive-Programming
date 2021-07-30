/*
Author: rafa45
Date: 23 Jul 2021
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


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n; cin >> n;
        if(n==1) cout << 1 << " " << 0 << endl;
        else if(n==2) cout << 0 << " " << 1 << endl;
        else{
            cout << n/3 + (n%3==1? 1:0)
                 << " "
                 << n/3 + (n%3==2? 1:0)
                 << endl;
        }
    }


    return 0;
}