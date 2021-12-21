/*
    ***************************
    *    Author: rafa45       *
    *    Date: 20 Dec 2021    *
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
        int n;
        cin >> n;

        unordered_set<ll> uset;

        ll num = 1, sq = 1, cube = 1;

        while(sq <= n){
            uset.insert(sq);
            if(cube <= n) uset.insert(cube);
            num++;
            sq = num*num;
            cube = sq*num;
        }

        cout << uset.size() << endl;
    }


    return 0;
}