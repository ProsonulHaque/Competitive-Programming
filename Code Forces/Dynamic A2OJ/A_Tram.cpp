/*
    ***************************
    *    Author: rafa45       *
    *    Date: 31 Aug 2021    *
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

    int capacity = 0, current_passenger = 0;

    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;

        current_passenger = current_passenger - a +b;
        capacity = max(capacity, current_passenger);
    }

    cout << capacity;


    return 0;
}