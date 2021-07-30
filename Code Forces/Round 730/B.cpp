/*
Author: rafa45
Date: 08 Jul 2021
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


    int t;
    cin >> t;


    while(t--){
        int n; cin >> n;
        ll cars = 0, sum = 0;

        for(int i=0; i<n; i++){
            cin >> cars;
            sum += cars;
        }

        cout << (sum%n) * (n-(sum%n)) << endl;
    }


    return 0;
}