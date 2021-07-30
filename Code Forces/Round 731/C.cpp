/*
Author: rafa45
Date: 12 Jul 2021
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
        int k, n, m; cin >> k >> n >> m;
        
        bool impossible = false;

        vector<int> v1(n);
        vector<int> v2(m);
        vector<int> v3;
        
        for (int i = 0; i < n; i++) cin >> v1[i];
        for (int i = 0; i < m; i++) cin >> v2[i];
        
        int mono = 0, poly = 0;
        
        while(mono < n || poly < m){
            if(mono <n && v1[mono]<=k){
                if(v1[mono] == 0) k++;
                v3.push_back(v1[mono++]);
            }
            else if(poly < m && v2[poly]<=k){
                if(v2[poly] == 0) k++;
                v3.push_back(v2[poly++]);
            }
            else{
                impossible = true;
                break;
            }
        }

        if(impossible){
            cout << -1 << endl; 
            continue;
        }

        for(int x : v3) cout << x << " ";
        cout << endl;
    }


    return 0;
}