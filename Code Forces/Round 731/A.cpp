/*
Author: rafa45
Date: 10 Jul 2021
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
        vector<vector<int>> v(3, vector<int>(2));
        for(int i=0; i<3; i++) cin >> v[i][0] >> v[i][1]; 
        int ans = abs(v[0][0]-v[1][0])+abs(v[0][1]-v[1][1]);
        if(v[0][0] == v[2][0] && v[1][0] == v[2][0] && (v[2][1]<v[0][1] && v[2][1]>v[1][1] || v[2][1]>v[0][1] && v[2][1]<v[1][1]))
            ans += 2;
        if(v[0][1] == v[2][1] && v[1][1] == v[2][1] && (v[2][0]<v[0][0] && v[2][0]>v[1][0] || v[2][0]>v[0][0] && v[2][0]<v[1][0]))
            ans += 2;
        cout << ans << endl;
    }

    return 0;
}